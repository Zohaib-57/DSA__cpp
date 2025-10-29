#include <iostream>
using namespace std;

/*
------------------------------------------
Practice 1: Greatest of Three Numbers
------------------------------------------

Flowchart:
Start → Input a, b, c →
If a > b and a > c → Output a
Else if b > c → Output b
Else → Output c → End

Pseudocode:
Start
    Input a, b, c
    If a > b and a > c then
        Output "A is greatest"
    Else if b > c then
        Output "B is greatest"
    Else
        Output "C is greatest"
Stop
*/

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "A is greatest: " << a << endl;
    else if (b > c)
        cout << "B is greatest: " << b << endl;
    else
        cout << "C is greatest: " << c << endl;

    return 0;
}
