#include "io.hpp"
#include <string>
#include <iostream>

int getUserInput(std::string message)
{
    std::cout << message << "\n";

    int output{};
    std::cin >> output;

    return output;
}

void writeAnswer(int x, int y)
{
    std::cout << x + y;
}
