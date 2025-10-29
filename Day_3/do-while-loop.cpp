#include <iostream>
using namespace std;

/*
------------------------------------------
Do-While Loop
------------------------------------------

Theory:
A do-while loop executes its body at least once, even if the condition is false.

Syntax:
do {
    // statements
} while (condition);
*/

int main() {
    int i = 1;
    do {
        cout << "Number: " << i << endl;
        i++;
    } while (i <= 5);

    return 0;
}
