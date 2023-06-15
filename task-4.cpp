#include <iostream>

using namespace std;

int main() {
    double base, height, area;

    // Введення основи та висоти трикутника
    cout << "Введіть довжину основи трикутника: ";
    cin >> base;

    cout << "Введіть висоту трикутника: ";
    cin >> height;

    // Обчислення площі трикутника
    area = 0.5 * base * height;

    // Виведення площі трикутника
    cout << "Площа трикутника: " << area << endl;

    return 0;
}
