#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name;
    cout << "Enter a string (name)";
    cin >> name;

    cout << "Length: " << name.length() << endl;
    cout << "First character: " << name[0] << endl;
    cout << "Last character: " << name[name.length()-1] << endl;

    //Uppercase version of that string.

    cout << "Uppercase version: ";
    for (int i = 0 ; i < name.length() ; i++){
        cout << (char)toupper(name[i]);
    }
    cout << endl;

    return 0;
}