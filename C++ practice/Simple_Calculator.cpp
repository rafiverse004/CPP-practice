#include<iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "Simple Calculator Results: \n";
    cout << "Sum: " << x + y << endl;
    cout << "Difference: " << x - y << endl;

    cout << "Quotient: " << x / y << endl;
    cout << "Remainder: " << static_cast<int>(x) % static_cast<int>(y) << endl;

    return 0;
}