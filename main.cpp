#include <iostream>
#include "calc.h"

int main()
{
    char yesOrNo;
    do
    {
        double x, y {};
        char action {};
        double result {};
        std::cout << "Enter first value: ";
        std::cin >> x;
        while (action != '+' && action != '-' && action != '*' && action != '/')
        {
            std::cout << "Enter an action: ";
            std::cin >> action;
            if (action != '+' && action != '-' && action != '*' && action != '/')
            std::cout << "Enter correct action: + or - or * or /." << std::endl;
        }
        std::cout << "Enter second value: ";
        std::cin >> y;
        while (action == '/' && y == 0)
        {
            std::cout << "You cant divide on 0" << std::endl;
            std::cout << "Enter second value: ";
            std::cin >> y;
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
        std::cout << "Do you want to repeat? y/n ";
        std::cin >> yesOrNo;
    } while (yesOrNo == 'y');
    return 0;
}
