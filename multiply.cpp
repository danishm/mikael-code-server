// Try it out
// Cool no?
#include <iostream>

double multiplyNumbers(double num1, double num2){
    return num1 * num2;
}

int main(){
    double number1, number2;
    std::cout << "Enter your first number: ";
    std::cin >> number1;

    std::cout << "Enter your second number: ";
    std::cin >> number2;

    double product = multiplyNumbers(number1, number2);

    std::cout << "The product of " << number1 << " and " << number2 << " is " << product << std::endl;
    return 0;


}