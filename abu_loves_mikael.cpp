#include <iostream>
#include <unistd.h>

using namespace std;

// Function to print lots of "o" characters. You can pass in how many
// "o" characters you want with the variable "n"
void lotsOfOs(int n) {
    for (int i=0; i<n; i++) {
        cout << "o";
    }
}

int main() {

    // Show first mesage
    cout << "Abu loves Mikael s";
    lotsOfOs(5);
    cout << " much!" << endl;

    // Wait for one second. Tthe "sleep()" function comes from #include <unistd.h>
    sleep(1);

    // Show the second message
    cout << "And I'm so pr";
    lotsOfOs(30);
    cout << "ud of you!" << endl;

    // Return success
    return 0;
}
