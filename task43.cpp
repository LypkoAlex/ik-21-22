#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    double length, width, area;

    // Введення довжини прямокутника
    cout << "Введіть довжину прямокутника: ";
    cin >> length;

    // Введення ширини прямокутника
    cout << "Введіть ширину прямокутника: ";
    cin >> width;

    // Обчислення площі прямокутника
    area = length * width;

    cout << "Площа прямокутника: " << area << endl;

    return 0;
}
