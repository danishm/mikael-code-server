#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 != 0) {
        cout << "it was odd!!" << endl;
    }
    else {
        cout << "it was even!!" << endl;
    }
}