#include <iostream> // Required for cin and cout

int main() {
    int age;
    std::cout << "Enter your age: "; // Prompt the user
    std::cin >> age; // Read an integer from input and store it in 'age'
    std::cout << "You entered: " << age << std::endl;
    return 0;
}
