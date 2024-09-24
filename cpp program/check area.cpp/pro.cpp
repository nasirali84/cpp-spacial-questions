// write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float length, breadth, area, perimeter;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << fixed << setprecision(2);
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    if (area > perimeter)
    {
        cout << "The area is greater than the perimeter." << endl;
    }
    else if (area < perimeter)
    {
        cout << "The perimeter is greater than the area." << endl;
    }
    else
    {
        cout << "The area is equal to the perimeter." << endl;
    }

    return 0;
}
