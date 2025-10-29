#include <iostream>
using namespace std;

/*
------------------------------------------
Day 2: Operators in C++ — Arithmetic, Relational,
Logical, Assignment, and Unary Operators
------------------------------------------

Theory:
Operators perform computations or comparisons on operands.

Categories:
1. Arithmetic: +, -, *, /, % (modulo)
2. Relational: ==, !=, >, <, >=, <=
3. Logical: && (and), || (or), ! (not)
4. Assignment: =, +=, -=, *=, /=, %=
5. Unary: ++ (increment), -- (decrement), + (unary plus), - (unary minus), ! (logical not)

Unary Operators (details):
- ++i (pre-increment): increment i, then use value.
- i++ (post-increment): use value, then increment.
- --i / i-- similar for decrement.

How to Solve (demonstrations provided in code):
- Show basic arithmetic
- Show relational checks producing boolean result
- Show logical operators with booleans
- Demonstrate difference between pre and post increment

Flowchart (example: show ++i vs i++):
Start
  ↓
Set i = initial
  ↓
Display i++  // prints old, then increment
Display ++i  // increments first, then prints
  ↓
End

Pseudocode:
Start
    i ← 5
    print i++   // prints 5, i becomes 6
    print ++i   // i becomes 7, prints 7
Stop

Logic:
- Understand evaluation order: post uses original value then changes variable; pre changes first then returns new value.
*/

int main() {
    // Arithmetic
    int x = 10;
    int y = 3;
    cout << "x + y = " << (x + y) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "x * y = " << (x * y) << endl;
    cout << "x / y = " << (x / y) << "  (integer division)" << endl;
    cout << "x % y = " << (x % y) << "  (remainder)" << endl;

    // Relational
    cout << "x > y ? " << (x > y) << endl;  // prints 1 for true
    cout << "x == y ? " << (x == y) << endl;

    // Logical
    bool a = true, b = false;
    cout << "a && b = " << (a && b) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "!a = " << (!a) << endl;

    // Assignment operators
    int z = 5;
    z += 3; // equivalent to z = z + 3
    cout << "z after z += 3 -> " << z << endl;

    // Unary operators: pre and post increment
    int i = 5;
    cout << "i = " << i << endl;
    cout << "i++ (post-increment) prints: " << i++ << endl; // prints 5, then i=6
    cout << "Now i = " << i << endl;
    cout << "++i (pre-increment) prints: " << ++i << endl;  // i becomes 7, prints 7
    cout << "Now i = " << i << endl;

    // More unary examples: negative and logical not
    int val = -3;
    cout << "Unary minus of val: " << -val << endl;
    bool flag = false;
    cout << "Logical not of flag: " << !flag << endl;

    return 0;
}
