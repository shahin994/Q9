#include <iostream>

double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
                return 0;
            }
        default:
            std::cerr << "Error: Invalid operator!" << std::endl;
            return 0;
    }
}

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result = calculate(num1, num2, op);
    std::cout << "Result: " << result << std::endl;

    return 0;
}