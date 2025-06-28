#include <iostream>
#include <string>

using namespace std;

string hell(int num1) {
    string c(num1, '*');
    return c;
    
}

int main() {
    int num1;

    cout << "Enter a number (1-10): ";
    cin >> num1;

    for(int i = 0; i<num1; i++){
        cout << "*";
        cout << hell(i) << endl;
    }
    for(int w = num1; w >= 0; w--) {
        cout << "*";
        cout << hell(w) << endl;
    }

    return 0;
}