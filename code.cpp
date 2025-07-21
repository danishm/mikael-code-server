#include <iostream>
#include <string>

void code(int cod) {
    
    

    std::cout << "Enter the password" << std::endl;
    std::cin >> cod;

    

    if(cod == '5299miksha66') {
        std::cout << "You are right!!";
    }

    else {
        std::cout << "I shall hack your PC!!";
    }

}

int main() {
    int codee;
    code(codee);
}