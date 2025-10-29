#include <iostream>
using namespace std;

/*
------------------------------------------
Day 1: Check Whether a Number is Positive, Negative, or Zero
------------------------------------------

Theory:
This program checks whether the number entered by the user is positive, negative, or zero.
Conditional statements (if-else) are used to test the sign of the number.

How to Solve:
1. Take one number as input from the user.
2. Compare it with 0 using if-else conditions.
3. If the number is greater than 0 → print "Positive".
4. If the number is less than 0 → print "Negative".
5. If the number is equal to 0 → print "Zero".

Flowchart:
Start → Input num → 
    If num > 0 → Output "Positive"
    Else If num < 0 → Output "Negative"
    Else → Output "Zero"
End

Pseudocode:
Start
    Input num
    If num > 0 then
        Output "Positive"
    Else if num < 0 then
        Output "Negative"
    Else
        Output "Zero"
Stop

Logic:
- User enters a number.
- The program checks conditions in sequence:
    → If greater than zero → Positive
    → Else if less than zero → Negative
    → Else → Zero
- Displays the appropriate message.
*/

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is Positive." << endl;
    } else if (num < 0) {
        cout << "The number is Negative." << endl;
    } else {
        cout << "The number is Zero." << endl;
    }

    return 0;
}
