// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line

#include <iostream>
using namespace std;

bool areCollinear(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    return (area == 0);
}

int main()
{
    float x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point (x3 y3): ";
    cin >> x3 >> y3;

    if (areCollinear(x1, y1, x2, y2, x3, y3))
    {
        cout << "The points are collinear." << endl;
    }
    else
    {
        cout << "The points are not collinear." << endl;
    }

    return 0;
}
