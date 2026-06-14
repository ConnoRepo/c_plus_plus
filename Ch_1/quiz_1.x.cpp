// Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.

#include <iostream> 

int main()
{
    std::cout << "Enter an integer: ";
    int num{}; 
    std::cin >> num;

    std::cout << "Enter another integer: ";
    int second_num{};
    std::cin >> second_num; 

    std::cout << num << " + " << second_num << " is " << num + second_num << ".\n"
              << num << " - " << second_num << " is " << num - second_num << ".\n";
}
