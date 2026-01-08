#include <iostream>
#include <string>

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

int main()
{
    int x{getUserInput("Enter an integer:")};
    int y{getUserInput("Enter another integer:")};

    writeAnswer(x, y);
    return 0;
}
