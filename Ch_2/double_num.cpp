#include <iostream>

int double_number(int x)
{
    return x * 2;
}

int main()
{
    std::cout << "Enter a number: ";
    int response{};
    std::cin >> response;

    int doubled{ double_number(response) };

    std::cout << "Your number doubled is: " << doubled << '\n';

    return 0;
}
