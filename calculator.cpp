
#include <iostream>
using namespace std;

int main() {
    double c;
    double y;
    char op;

    // Enter the first number
    cout << "Enter first number: ";
    cin >> c;

    // Enter the operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Enter the second number
    cout << "Enter second number: ";
    cin >> y;

    // Perform the operation
    if (op == '+') {
        cout << "Result: " << c + y << endl;
    }
    else if (op == '-') {
        cout << "Result: " << c - y << endl;
    }
    else if (op == '*') {
        cout << "Result: " << c * y << endl;
    }
    else if (op == '/') {
        if (y != 0) {
            cout << "Result: " << c / y << endl;
        }
        else {
            cout << "Error: Cannot divide by zero!" << endl;
        }
    }
    else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
