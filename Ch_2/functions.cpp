#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    // returning the variable is necessary so next function knows what to access
    return input;
}

int main()
{
    int num { getValueFromUser() };

    std::cout << "Number doubled is: " << num * 2 << '\n';

    return 0;
}
