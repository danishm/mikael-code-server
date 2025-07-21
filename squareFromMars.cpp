#include <iostream>
#include <string>

using namespace std;

void fullline(int n) {
    for(int i = 0; i < n; i++) {
        cout << '-';
    }
    cout << endl;
}

void topLine(int n) {
    cout << "┌";
    int n2 = n - 2;
    for(int w = 0; w < n2; w++) {

        cout << "─";
    }
    cout << "┐" << endl;
}

void bottomLine(int n) {
    cout << "└";
    int n2 = n - 2;
    for(int w = 0; w < n2; w++) {

        cout << "─";
    }
    cout << "┘" << endl;
}

void middleLine(int n) {
    cout << "│";
    int n2 = n - 2;
    for(int w = 0; w < n2; w++) {

        cout << ' ';
    }
    cout << "│" << endl;
}

int main() {
    int n;

    cout << "Enter a number(2 - 10): ";
    cin >> n;

    topLine(n);
    for(int s = 0; s < (n-2); s++) {
        middleLine(n);
    }
    bottomLine(n);

    return 0;
}