#include <iostream>
#include <string>


using namespace std;


int main()
{
    string input;

    cout << "Enter a word or a sentence: \n";
    getline(cin, input);

    for(int i = 0; i<input.size(); i+=2)
    {
        cout << input[i] << ' '; 
    }
    cout << endl;
    for(int i = 1; i<input.size(); i+=2)
    {
        cout << ' ' << input[i]; 
    }
    cout << endl;
}