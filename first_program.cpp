#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int user_input{};
    std::cin >> user_input;

    // using an expression allows us to not have to create a second variable to store the calculation
    std::cout << "Double that number is: " << user_input * 2 << '\n';
}
