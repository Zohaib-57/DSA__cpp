#include <iostream>
using namespace std;

/*
------------------------------------------
Nested Loops
------------------------------------------

Theory:
When a loop is placed inside another loop, it’s called a nested loop.
Used for patterns, matrices, and repetitive tasks within loops.

Example: Print a simple 3x3 pattern
*/

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
