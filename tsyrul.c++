#include <iostream>
#include <string>
#include <curl/curl.h>
#include <rapidjson/document.h>

using namespace std;
using namespace rapidjson;

// Функція, яка викликається при отриманні відповіді з API
size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* response)
{
    size_t totalSize = size * nmemb;
    response->append((char*)contents, totalSize);
    return totalSize;
}

// Функція для отримання курсу обміну валют
double getExchangeRate(const string& fromCurrency, const string& toCurrency)
{
    string apiKey = "YOUR_API_KEY"; // Поміняйте на свій API-ключ
    string url = "https://api.exchangerate-api.com/v4/latest/" + fromCurrency;

    CURL* curl = curl_easy_init();
    if (curl) {
        string response;
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        CURLcode res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (res == CURLE_OK) {
            Document document;
            document.Parse(response.c_str());
            if (!document.HasParseError() && document.HasMember(toCurrency.c_str())) {
                return document[toCurrency.c_str()].GetDouble();
            }
        }
    }

    return 0.0; // Повертаємо 0, якщо не вдалося отримати курс обміну
}

// Основна функція програми
int main()
{
    double amount;
    string fromCurrency, toCurrency;

    cout << "Введіть кількість грошей: ";
    cin >> amount;

    cout << "Введіть валюту, з якої потрібно перевести: ";
    cin >> fromCurrency;

    cout << "Введіть валюту, в яку потрібно перевести: ";
    cin >> toCurrency;

    double exchangeRate = getExchangeRate(fromCurrency, toCurrency);

    if (exchangeRate > 0.0) {
        double convertedAmount = amount * exchangeRate;
        cout << "Результат: " << convertedAmount << " " << toCurrency << endl;
    } else {
        cout << "Не вдалося отримати курс обміну." << endl;
    }

    return 0;
}