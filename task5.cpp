#include <iostream>
#include <locale>

bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int getNumberOfDays(int month, int year) {
    if (month == 2) {
        if (isLeapYear(year))
            return 29;
        else
            return 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else {
        return 31;
    }
}

int main() {
    std::locale::global(std::locale("uk_UA.UTF-8")); // Встановлення української локалізації
    std::wcout.imbue(std::locale()); // Встановлення локалізації для виводу (wcout)

    using namespace std;

    int month, year;
    wcout << L"Введіть номер місяця (1-12): ";
    cin >> month;
    wcout << L"Введіть рік: ";
    cin >> year;

    int numberOfDays = getNumberOfDays(month, year);
    wcout << L"Кількість днів у вказаному місяці: " << numberOfDays << endl;

    return 0;
