#include <iostream>
using namespace std;

/*
------------------------------------------
Day 3: Conditional Statements and Loops
------------------------------------------

Theory:
In programming, conditional statements and loops control the flow of execution based on certain conditions.

-------------------------
1. Conditional Statements:
-------------------------
Conditional statements are used to make decisions in a program.
They check whether a condition is true or false and execute code accordingly.

Types:
- if statement
- if...else statement
- else if ladder
- nested if
- switch statement
- ternary operator

Syntax (if...else):
if (condition) {
    // Executes when condition is true
} else {
    // Executes when condition is false
}

Flowchart (if...else):
Start → Condition? → Yes → Execute True Block → End
               ↓
               No → Execute False Block → End

Pseudocode:
Start
    Input number
    If number > 0 then
        Output "Positive"
    Else
        Output "Non-positive"
Stop

Logic:
- The program checks the condition.
- Executes the block corresponding to the result (true/false).
*/

// Example 1: Simple if...else
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "Positive number" << endl;
    } else if (number < 0) {
        cout << "Negative number" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}