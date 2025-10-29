#include <iostream>
using namespace std;

/*
------------------------------------------
While Loop
------------------------------------------

Theory:
A while loop repeats a block of code as long as a condition is true.

Syntax:
while (condition) {
    // statements
}

Flowchart:
Start → Condition True? → Body → Repeat
                   ↓
                  False → End
*/

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "Count: " << i << endl;
        i++;
    }

    return 0;
}
