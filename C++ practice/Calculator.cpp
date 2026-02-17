#include <iostream>
#include <cmath>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "_____Simple Calculator_____\n";

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter an operator (+ - * /): ";
    std::cin >> op;

    switch (op)
    {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;

        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;

        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;

        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                std::cout << "Result: " << result << '\n';
            }
            else
            {
                std::cout << "Error: Division by zero is not allowed.\n";
            }
            break;

        default:
            std::cout << "Error: Invalid operator.\n";
            break;
    }

    return 0;
}
