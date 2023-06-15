#include <iostream>

bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int year;
    std::cout << "Введіть рік: ";
    std::cin >> year;

    if (isLeapYear(year))
    {
        std::cout << year << " є високосним роком." << std::endl;
    }
    else
    {
        std::cout << year << " не є високосним роком." << std::endl;
    }

    system("pause");
    return 0;
}
