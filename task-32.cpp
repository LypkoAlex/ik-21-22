#include <iostream>
using namespace std;

int main() {
	float inches;
	cout << "You give me inches - "; cin >> inches;

	float MyBelovedCM = inches * 2.54;
	cout << "I make them cooler, centimeters - " << MyBelovedCM << "\n";

	return 0;
}