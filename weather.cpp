#include <iostream>
#include <string>

int main() {
    std::string data;
    std::string yea;


    std::cout << "Is there a storm or rain near you: " << std::endl;
    std::cin >> data;
    


    if(data == "yes") {
        std::cout << "Maybe skip the walk";
        std::cout << " or take an uber" << std::endl;
    }
    else if(data == "no") {
        std::cout << "What's the temp in celcius: " << std::endl;
        std::cin >> yea;

        int cyea = std::stoi(yea);
        std::cout << "You entered:" << cyea << std::endl;

        if (cyea <= -2) {
            std::cout << "Bbbbbbbrrrrrrrr, think about wearing a down jacket/s and multiple sweaters take a subway defanitly do not walk" << std::endl;
        }
        else if (cyea <= 0) {
            std::cout << "Wear a down jacket if you have to but probably don\'t go out" << std::endl;

        }
        else if (cyea <= 10) {
            std::cout << "Very chilly, bundle up take an uber or even the subway" << std::endl;

        }
        else if(cyea < 25) {
            std::cout << "Little chilly out there, get a light jacket or/and a sweater, walk or take the subway" << std::endl;

        }
        else if(cyea >= 25) {
            std::cout << " Perfect weather! Take a walk or a subway or even the bus" << std::endl;

        }

    }
    return 0;
}

// No browser!!!