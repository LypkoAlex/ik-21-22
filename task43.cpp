#include <iostream>

using namespace std;

int main() {
    
    double length, width, area;

    
    cout << "Введіть довжину прямокутника: ";
    cin >> length;

    
    cout << "Введіть ширину прямокутника:: ";
    cin >> width;

    
    area = length * width;

    cout << "Площа прямокутника: " << area << endl;

    return 0;
}
