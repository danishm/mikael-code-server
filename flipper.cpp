#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    getline(cin, name);

    for(int i = name.size()-1; i >= 0; i--)
    {
        cout << name[i];
    }
    cout << endl;
}