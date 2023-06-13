#include <iostream>

int main() {
    double distance;
    double fuelCost;
    double totalCost;

    std::cout << "Enter the distance in kilometers: ";
    std::cin >> distance;

    std::cout << "Enter the fuel cost per liter: ";
    std::cin >> fuelCost;

    totalCost = distance * fuelCost;

    std::cout << "The total cost of the trip is: " << totalCost << " UAH" << std::endl;

    return 0;
}
