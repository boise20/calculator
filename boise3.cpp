#include <iostream>

int main() {
    double num1, num2;
    char operator_;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operator_;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operator_) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
            break;
        case '/':
            if (num2 != 0)
                std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
            else
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
    }

    return 0;
}