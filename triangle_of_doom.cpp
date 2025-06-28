#include <iostream>
#include <string>

using namespace std;

string loop(int num1){
    string s(num1, '*');
    return s;
}

int main(){
    int num1;

    cout << "Enter a number between 1 to 10: ";
    cin >> num1;

    for(int i = 0; i<num1; i++){
        cout << loop(i*3) << endl;
    }



    return 0;

    

}