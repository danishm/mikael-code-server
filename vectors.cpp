#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {

    vector<int> myVector = {1,2,3,4,5,6,7,8,9,0};

    for(int i : myVector) {
        cout << i << "  ";
    }

    cout << endl;

}