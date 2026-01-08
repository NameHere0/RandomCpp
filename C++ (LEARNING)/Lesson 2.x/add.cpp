#include <iostream>
#include <string>

int main()
{
    int x{getUserInput("Enter an integer:")};
    int y{getUserInput("Enter another integer:")};

    writeAnswer(x, y);
    return 0;
}
