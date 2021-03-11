#include <iostream>
#include <iomanip>
#include <Windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    long double money, change = 0;
    std::cout << "Enter the money in Japanese yen: ";
    std::cin >> money;

    money *= 100;

    std::cout.imbue(std::locale("ja_JP.utf8"));
    std::cout << std::showbase << "Amount entered in Japanese yen: " << std::put_money(money) << std::endl;

    std::cout << "Enter the yen-ruble exchange rate: " << std::endl;
    std::cin >> change;

    money = money * change;
    std::cout.imbue(std::locale("ru_RU.UTF-8"));
    std::cout << std::showbase << "Amount entered in rubles: " << std::put_money(money) << std::endl;
    system("pause");
    return 0;
}
