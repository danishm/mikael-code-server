#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void hehe();

int main(int argc, char** argv) {

    if (argc > 1) {
        double e = stod(argv[1]);
        cout << "Show 2 to the power of " << e << " is " << pow(2, e) << endl;
    }
    else {
        cout << "ERROR: Please pass the power parameter" << endl;
        return -1;
    }

}

