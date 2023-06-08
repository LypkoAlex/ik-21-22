#include <iostream>
#include <cmath>

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Корені рівняння: " << root1 << " та " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Рівняння має один корінь: " << root << std::endl;
    } else {
        std::cout << "Рівняння не має дійсних коренів." << std::endl;
    }
}

int main() {
    double a, b, c;
    std::cout << "Введіть коефіцієнти a, b та c: ";
    std::cin >> a >> b >> c;

    solveQuadraticEquation(a, b, c);

    return 0;
}
