#include <iostream>
#include <string>

std::string disition_Of_Key(std::string user) {
    std::string type["Firm linear", "Soft linear", "Soft tactile", "Tactile & clicky", "Tactile"];
    std::cout << "What sort of feel do you want in your switch: " << type[5] << ": " << std::endl;
    std::getline(std::cin, user);

    if (user == type[0]) {
        std::cout << ""
    }
}