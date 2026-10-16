#include <iostream>
#include "calc.h"

int main()
{
    double x, y;
    char action;
    double result;
    std::cout << "Enter first value: ";
    std::cin >> x;
    std::cout << "Enter second value: ";
    std::cin >> y;
    std::cout << "Enter an action: ";
    std::cin >> action;
    while (action != '+' && action != '-' && action != '*' && action != '/')
    {
    std::cin >> action;
    }
    switch(action)
    {
    case '+':
        result = add(x, y);
        break;
    case '-':
        result = subtract(x, y);
        break;
    case '*':
        result = multiply(x, y);
        break;
    case '/':
        result = divide(x, y);
        break;
    }
    std::cout << "Your result = " << result << std::endl;

    return 0;
}
