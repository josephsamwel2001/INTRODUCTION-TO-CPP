
#include <iostream>
#include <limits>
using namespace std;

// CLASS: blueprint for calculator objects
class Calculator {
private:
    double c;
    double y;
    char op;

public:
    // CONSTRUCTOR: initializes the calculator
    Calculator() {
        c = 0;
        y = 0;
        op = '+';
    }

    // FUNCTION: addition
    double add(double a, double b) {
        return a + b;
    }

    // FUNCTION: subtraction
    double subtract(double a, double b) {
        return a - b;
    }

    // FUNCTION: multiplication
    double multiply(double a, double b) {
        return a * b;
    }

    // FUNCTION: division
    double divide(double a, double b) {
        return a / b;
    }

    // FUNCTION: run the calculator
    void run() {
        int choice;

        do {
            cout << "\n===== OOP CALCULATOR =====\n";
            cout << "1. Addition (+)\n";
            cout << "2. Subtraction (-)\n";
            cout << "3. Multiplication (*)\n";
            cout << "4. Division (/)\n";
            cout << "5. Exit\n";
            cout << "Choose an option: ";

            if (!(cin >> choice)) {
                cout << "Invalid input. Enter a number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (choice == 5) {
                cout << "Calculator closed.\n";
                break;
            }

            if (choice < 1 || choice > 5) {
                cout << "Invalid choice. Try again.\n";
                continue;
            }

            cout << "Enter first number: ";
            if (!(cin >> c)) {
                cout << "Invalid number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "Enter second number: ";
            if (!(cin >> y)) {
                cout << "Invalid number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            // SWITCH: select the operation
            switch (choice) {
                case 1:
                    op = '+';
                    cout << "Result: " << add(c, y) << endl;
                    break;

                case 2:
                    op = '-';
                    cout << "Result: " << subtract(c, y) << endl;
                    break;

                case 3:
                    op = '*';
                    cout << "Result: " << multiply(c, y) << endl;
                    break;

                case 4:
                    op = '/';

                    if (y == 0) {
                        cout << "Error: Cannot divide by zero.\n";
                    } else {
                        cout << "Result: " << divide(c, y) << endl;
                    }
                    break;
            }

        } while (true);
    }
};

// MAIN FUNCTION: program entry point
int main() {
    // OBJECT: create a Calculator instance
    Calculator myCalculator;

    // Call the object's public function
    myCalculator.run();

    return 0;
}
