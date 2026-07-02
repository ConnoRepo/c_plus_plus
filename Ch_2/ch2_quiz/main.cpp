#include <iostream> 
#include "io.h"

int main()
{
    int first_number{ readNumber() };

    int second_number{ readNumber() };

    writeAnswer(first_number + second_number);
    return 0;
}
