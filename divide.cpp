// did not use browser
#include <iostream>

double divNum(int num1, int num2){
    int sum = num1 / num2
    return sum
}


int main(){

    std::cout << "Enter your first number: "
    std::cin >> int number1

    std::cout << "Enter your second number: "
    std::cin >> int number2

    double product = divNum( int number1, int number2);

    std::cout << "The product of " << number1 << " and " << number2 << " is " <<  product;
    return 0;
}