#include <iostream>
using namespace std;

/*
------------------------------------------
Day 2: Type Conversion and Type Casting in C++
------------------------------------------

Theory:
Type conversion (also called type coercion) is converting one data type to another.
- Implicit conversion: compiler automatically converts between types when safe.
- Explicit conversion (type casting): programmer forces conversion using cast syntax.

Common reasons:
- Mixed-type arithmetic (int + double) => result promoted to double.
- Avoid precision loss or force truncation when desired.

How to Solve:
- Prefer implicit conversions when safe and intended.
- Use explicit casting when you want a precise control (e.g., int(x) or static_cast<int>(x)).

Examples covered:
1) Implicit conversion (int -> double)
2) Explicit cast (double -> int) showing truncation
3) Using static_cast (recommended modern C++ cast)

Flowchart (example: convert double to int):
Start
  ↓
Input doubleValue
  ↓
intValue = (int)doubleValue  // or static_cast<int>(doubleValue)
  ↓
Output intValue
  ↓
End

Pseudocode:
Start
    Input d
    i ← cast d to int
    Output i
Stop

Logic:
- Read a double value
- Convert to int (explicit) — fractional part removed
- Show original and converted values
*/

int main() {
    // Example 1: implicit conversion in mixed arithmetic
    int iVal = 5;
    double dVal = 2.5;
    double result = iVal + dVal; // int implicitly converted to double
    cout << "Implicit conversion (int + double): " << result << endl; // 7.5

    // Example 2: explicit conversion (C style)
    double pi = 3.14159;
    int truncated_pi_cstyle = (int)pi; // truncation -> 3
    cout << "Truncated (C-style) pi -> " << truncated_pi_cstyle << endl;

    // Example 3: explicit conversion (recommended C++ style)
    int truncated_pi = static_cast<int>(pi); // same effect
    cout << "Truncated (static_cast) pi -> " << truncated_pi << endl;

    // Example 4: watch out for integer division
    int a = 7, b = 2;
    double div1 = a / b;                 // integer division happens first -> 3 then promoted -> 3.0
    double div2 = static_cast<double>(a) / b; // converts a to double -> 3.5
    cout << "Integer division then promotion: " << div1 << endl;
    cout << "Floating division with cast: " << div2 << endl;

    return 0;
}
