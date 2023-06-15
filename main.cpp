#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& str) {
    // Перетворюємо рядок на нижній регістр
    std::string lowerStr;
    for (char ch : str) {
        if (std::isalpha(ch)) {
            lowerStr += std::tolower(ch);
        }
    }

    // Перевіряємо, чи є перетворений рядок паліндромом
    int left = 0;
    int right = lowerStr.length() - 1;
    while (left < right) {
        if (lowerStr[left] != lowerStr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "Рядок є паліндромом." << std::endl;
    } else {
        std::cout << "Рядок не є паліндромом." << std::endl;
    }

    return 0;
}