#include "userput.hpp"
#include <string>
#include <iostream>

int getUserInput(std::string message)
{
    std::cout << message << "\n";

    int output{};
    std::cin >> output;

    return output;
}
