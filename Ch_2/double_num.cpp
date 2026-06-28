#include <iostream>

int double_number(int x)
{
    int double_num{};
    double_num = x * 2;

    return double_num;
}

int main()
{
    std::cout << "Enter a number: ";
    int response{};
    std::cin >> response;

    int doubled{};
    doubled = double_number(response);

    std::cout << "Your number doubled is: " << doubled << '\n';

    return 0;
}
