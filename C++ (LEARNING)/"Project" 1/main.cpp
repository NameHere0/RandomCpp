/*the classic calculator:
    - the user inputs a number
    - the user inputs another number
    - the program outputs the result of the first and second number with the every operator (i can find)*/

#include "userput.hpp"
#include <iostream>

int main()
{

    // Define x as getUserInput()
    int x{getUserInput("Enter an integer:")};

    // Do the same thing for y
    int y{getUserInput("Enter another integer:")};

    // print x + y and equivelant for others
    std::cout << "Addition: " << x + y << "\n";       // print the sum
    std::cout << "Subtraction: " << x - y << "\n";    // print subtraction
    std::cout << "Multiplication: " << x * y << "\n"; // print product
    std::cout << "Division: " << x / y << "\n";       // print division

    // Newline for upcoming
    std::cout << "\n";

    // Add some extras cuz why not
    // TODO: FINISH

    return 0;
}
