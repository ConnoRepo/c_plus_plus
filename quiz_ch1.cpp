// quiz: modify the program to include triple the user's output as well

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int user_input{};
    std::cin >> user_input;

    std::cout << "Double " << user_input << " is: " << user_input * 2 << '\n' 
              << "Triple " << user_input << " is: " << user_input * 3 << '\n';

}
