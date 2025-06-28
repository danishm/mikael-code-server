#include <iostream>
#include <cmath>

int main() {
    int originalNumber;
    std::cout << "On a scale of 1 to 10 how great are you:  ";
    std::cin >> originalNumber;


     int roundedNumber = static_cast<int>(std::round(originalNumber / 5.0) * 5);


    switch (roundedNumber) {
        case 0:
                std::cout << "You are so great" << std::endl;
                break;
         case 5:
                std::cout << "You are silly" << std::endl;
                break;
         case 10:
                std::cout << "You are the silliest person on Earth!!" << std::endl;
                break;
       default:
              std::cout << "Silly mastermind!!!";
              break;
            
        
        }

        return 0;
    }
