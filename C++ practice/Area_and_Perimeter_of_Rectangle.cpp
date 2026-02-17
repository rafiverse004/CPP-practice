#include <iostream>
using namespace std;

int main() {
    double length, width;

    cout << "Enter the length of rectangle: ";
    cin >> length;

    cout << "Enter the width of rectangle: ";
    cin >> width;

    double area = length * width;
    double perimeter = 2 * ( length + width );

    cout << "Area of a rectangle:" << area << endl;
    cout << "Perimeter of a rectangle:" << perimeter << endl;

    return 0;
}