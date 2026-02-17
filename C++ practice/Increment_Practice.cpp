#include <iostream>
using namespace std;

int main()
{
    double number;
    cout << "Enter a number: ";
    cin >> number;

    number++;
    cout << "After first increment: " << number << endl;

    number++;
    cout << "After second increment: " << number << endl;

    return 0;
}