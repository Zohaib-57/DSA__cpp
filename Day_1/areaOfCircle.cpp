#include <iostream>
using namespace std;

/*
------------------------------------------
Day 1: Area of a Circle
------------------------------------------

Theory:
This program calculates the area of a circle using the formula:
Area = π × r²
Where 'r' is the radius entered by the user.
The constant value of π (pi) is approximately 3.14159.

How to Solve:
1. Take the radius of the circle as input from the user.
2. Use the formula Area = 3.14159 × radius × radius.
3. Display the area as the output.

Flowchart:
Start → Input radius → Area = 3.14159 × r × r → Output Area → End

Pseudocode:
Start
    Input radius
    Area ← 3.14159 × radius × radius
    Output Area
Stop

Logic:
- The user enters the radius.
- The program multiplies radius by itself and then by 3.14159.
- The calculated value is printed as the area of the circle.
*/

int main() {
    float radius, area;
    const float PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of the Circle = " << area << endl;

    return 0;
}
