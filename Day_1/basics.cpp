#include <iostream>
using namespace std;

/*
------------------------------------------
Day 1: Basic Input/Output and Problem Solving
------------------------------------------
Objective:
This program demonstrates how to take input from the user and display output in C++.
It also shows how to add two numbers.

How to Solve:
1. Take two numbers from user.
2. Add them.
3. Print the result.

Flowchart:
Start → Input A, B → Sum = A + B → Output Sum → End

Pseudocode:
Start
    Input A, B
    Sum ← A + B
    Output Sum
Stop

Logic:
- User enters two integers.
- Program computes their sum using '+' operator.
- Result is displayed on screen.
*/

int main() {
    int a, b, sum;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    sum = a + b;

    cout << "Sum = " << sum << endl;

    return 0;
}
