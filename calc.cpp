#include <iostream>

using namespace std; 

// Abu: Amazing job Mikael!!

double performOperation(double num1, double num2, char operation) {
    double result;
    switch (operation) { 
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: division by zero!" << endl;
                return 0; 
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 0;
    }
    return result; 
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: "; //
    cin >> num1;

    cout << "Enter the second number: "; 
    cin >> num2;

    cout << "Enter the operation (+, -, *, /): "; 
    cin >> operation;

    double result = performOperation(num1, num2, operation);

    cout << "Result: " << result << endl;

    return 0;
}
