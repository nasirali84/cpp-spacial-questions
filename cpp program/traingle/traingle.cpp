//  Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle
#include <iostream>
using namespace std;

int main()
{
    float side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle:\n";
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << "Side 3: ";
    cin >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        cout << "The lengths of the sides must be positive numbers." << endl;
        return 1;
    }
    if (side1 == side2 && side2 == side3)
    {
        cout << "The triangle is equilateral." << endl;
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        cout << "The triangle is isosceles." << endl;
    }
    else
    {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}
