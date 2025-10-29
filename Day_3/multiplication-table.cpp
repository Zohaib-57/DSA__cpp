#include <iostream>
using namespace std;

/*
------------------------------------------
Practice 2: Multiplication Table
------------------------------------------

Flowchart:
Start → Input n → i = 1 → 
while (i <= 10) → print n*i → i++ → End
*/

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
