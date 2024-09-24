//  Given the length and breadth of a rectangle,
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float length, breadth, area, perimeter;

    // Input length and breadth
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << fixed << setprecision(2); 
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
