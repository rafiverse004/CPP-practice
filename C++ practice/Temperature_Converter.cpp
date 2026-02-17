#include <iostream>
using namespace std;

int main()
{
    double celcius;
    cout << "Enter temperature in celcius: ";
    cin >> celcius;

    double fahrenheit = ( celcius * 9/5 ) + 32 ;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}