#include <iostream>
using namespace std;

/*
------------------------------------------
Practice 3: Sum of Digits using Do-While
------------------------------------------

Flowchart:
Start → Input num → sum=0 →
do {
    rem = num % 10
    sum = sum + rem
    num = num / 10
} while (num != 0)
Output sum → End
*/

int main() {
    int num, sum = 0, rem;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    do {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    } while (temp != 0);

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
