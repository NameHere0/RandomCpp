/*the classic calculator:
    - the user inputs a number
    - the user inputs another number
    - the program outputs the result of the first and second number with the every operator (i can find)*/

#include "userput.hpp"
#include "print.hpp"
#include <iostream>

int main()
{

    // Define x as getUserInput()
    int x{getUserInput("Enter an integer:")};

    // Do the same thing for y
    int y{getUserInput("Enter another integer:")};

    // Now print all solutions including x and y
    print(x + y);

    // cout x + y and newline for every operator
    return 0;
}
