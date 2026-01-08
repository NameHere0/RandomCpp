#include "userput.hpp"
#include <iostream>

int main()
{
    int x{getUserInput("Enter an integer:")};
    int y{getUserInput("Enter another integer:")};

    std::cout << x + y;
    return 0;
}
