#include <iostream>
using namespace std;

int main() {
    double radius;
    double area;

    cout << "Введіть радіус кола: ";
    cin >> radius;

    area = 3.14159 * radius * radius;

    cout << "Площа кола: " << area << endl;

    return 0;
}
