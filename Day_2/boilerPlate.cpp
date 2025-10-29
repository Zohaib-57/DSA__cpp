#include <iostream>
using namespace std;

/*
------------------------------------------
Day 2: C++ Basics — Boilerplate, Comments,
Variables, Data Types, Input, Sum of Two Numbers
------------------------------------------

Theory:
This file covers the minimal C++ program structure (boilerplate), how to write comments,
how variables work, primitive data types, simple input/output (cin/cout), and a small
example: sum of two numbers.

Boilerplate (minimal program structure):
- #include <...>  : preprocessor directives for headers (e.g., <iostream>)
- using namespace std; (optional) : avoids typing std:: prefix
- int main() { ... } : program entry point; returns integer

Comments:
- Single-line: // comment
- Multi-line: /* comment * / (without space)

Variables:
- A variable is a named storage location.
- Must declare with a type: e.g., int x; float y; char c;

Primitive Data Types (common):
- int    : integer numbers (e.g., -10, 0, 42)
- float  : single-precision floating point (e.g., 3.14)
- double : double-precision floating point (e.g., 2.7182818)
- char   : single characters (e.g., 'a')
- bool   : boolean true/false

Input/Output:
- input:  cin >> variable;
- output: cout << value << endl;

How to Solve (example: sum of two numbers):
1. Declare variables for two numbers and sum.
2. Read values from user (cin).
3. Compute sum = a + b.
4. Print sum (cout).

Flowchart (text):
Start
  ↓
Input a, b
  ↓
sum = a + b
  ↓
Output sum
  ↓
End

Pseudocode:
Start
    Input a, b
    sum ← a + b
    Output sum
Stop

Logic (step-by-step for sum):
1. Program starts at main().
2. Variables declared.
3. Program waits for user to enter two numbers.
4. Program calculates sum using + operator.
5. Program prints result and exits.
*/

int main() {
    // Variable declarations
    int a, b, sum;

    // Input
    cout << "Enter first integer: ";
    cin >> a;                // read first integer

    cout << "Enter second integer: ";
    cin >> b;                // read second integer

    // Processing
    sum = a + b;             // arithmetic addition

    // Output
    cout << "Sum = " << sum << endl;

    return 0;
}
