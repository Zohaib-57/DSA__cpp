#include <iostream>
using namespace std;

/*
------------------------------------------
Ternary Operator (? :)
------------------------------------------

Theory:
The ternary operator provides a shorthand for simple if-else conditions.
Syntax:
condition ? expression_if_true : expression_if_false;

Flowchart:
Start → Condition? → True → Expr1 → End
                     ↓
                     False → Expr2 → End
*/

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    string result = (age >= 18) ? "Eligible to vote" : "Not eligible";
    cout << result << endl;

    return 0;
}
