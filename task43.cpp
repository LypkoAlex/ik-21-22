#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    double length, width, area;

    // �������� ������� ������������
    cout << "������ ������� ������������: ";
    cin >> length;

    // �������� ������ ������������
    cout << "������ ������ ������������: ";
    cin >> width;

    // ���������� ����� ������������
    area = length * width;

    cout << "����� ������������: " << area << endl;

    return 0;
}
