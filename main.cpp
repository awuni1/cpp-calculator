#include <iostream>
using namespace std;

int main() {
    string operation;
    double number1;
    double number2;

    cout << "Please enter the first number: ";
    cin >> number1;

    cout << "Please enter the operation (*, %, +, /, -): ";
    cin >> operation;

    cout << "Please enter the second number: ";
    cin >> number2;

    if (operation == "+") {
        cout << number1 + number2;
    } else if (operation == "*") {
        cout << number1 * number2;
    } else if (operation == "%") {
        if (static_cast<int>(number2) != 0) {
            cout << static_cast<int>(number1) % static_cast<int>(number2);
        } else {
            cout << "Error: Division by zero!";
        }
    } else if (operation == "/") {
        if (number2 != 0) {
            cout << number1 / number2;
        } else {
            cout << "Error: Division by zero!";
        }
    } else if (operation == "-") {
        cout << number1 - number2;
    } else {
        cout << "Not a recognized operation!";
    }

    return 0;
}
