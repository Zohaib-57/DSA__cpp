#include <iostream>
using namespace std;

/*
------------------------------------------
For Loop
------------------------------------------

Theory:
The for loop is used when the number of iterations is known.

Syntax:
for (initialization; condition; update) {
    // code
}

Example:
Print numbers 1 to 5
*/

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
