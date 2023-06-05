#include <iostream>

double celsius_to_fahrenheit(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

double fahrenheit_to_celsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}
using namespace std;
int main() {
    int choice;
    cout << "Виберіть операцію: \n";
    cout << "1 - перевести з Цельсія в Фаренгейт\n";
    cout << "2 - перевести з Фаренгейта в Цельсій\n";
    cin >> choice;

    if (choice == 1) {
        double celsius;
        cout << "Введіть температуру в градусах Цельсія: ";
        cin >> celsius;

        double fahrenheit = celsius_to_fahrenheit(celsius);
        cout << "Температура в градусах Фаренгейта: " << fahrenheit << " °F\n";
    } else if (choice == 2) {
        double fahrenheit;
        cout << "Введіть температуру в градусах Фаренгейта: ";
        cin >> fahrenheit;

        double celsius = fahrenheit_to_celsius(fahrenheit);
        cout << "Температура в градусах Цельсія: " << celsius << " °C\n";
    } else {
        cout << "Некоректний вибір операції.\n";
    }

    return 0;
}


