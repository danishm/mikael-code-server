#include <iostream> 


int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
    
}

int main() {
    int number1 = 5;
    int number2 = 13;
    
    
    int result = add(number1, number2); 
    
    std::cout << "The sum is: " << result << std::endl;
    
    return 0;
}