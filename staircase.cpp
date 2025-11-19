#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    string space = " ";
    cout << "Enter your name: " << endl;
    cin >> input;

    for(int i = 0; i <= input.size(); i++)
    {
        
        for(int j = 0; j <= i; j++)
        {
            cout << space;
        
        }
        cout << input[i] << "\n";
    }
    cout << endl;

    return 0;
}