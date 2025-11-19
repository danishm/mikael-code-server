#include <iostream>
#include <string>

using namespace std;

string getRam()
{   string gb;
    cout << "How much RAM do you want\n";
    getline(cin, gb);

    return gb;
}

string getMemory()
{
    string beegees;
    cout << "How much memory do ypou want\n";
    getline(cin,  beegees);

    return beegees;
}

