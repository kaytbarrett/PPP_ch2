// Write a program that takes an operation followed by two operands and outputs the result
// Read the operation into a string called operation and use an if statement to figure out which 
// operation the user wants to use.
// Read the operands into variables of type double and perform operation

#include <iostream> 

using namespace std;

int main() {

    cout << "Please enter an operation and two operands (ex: + 6 7):" << endl;;
    char operation;
    double operand1;
    double operand2;
    cin >> operation >> operand1 >> operand2;

    double result;

    switch (operation) {
        case '+':
            result = operand1 + operand2;
            cout << operand1 << " " << operation << " " << operand2 << " = " << result << endl;
            break;
        case '-':
            result = operand1 - operand2;
            cout << operand1 << " " << operation << " " << operand2 << " = " << result << endl;
            break;
        case '*':
            result = operand1 * operand2;
            cout << operand1 << " " << operation << " " << operand2 << " = " << result << endl;
            break;
        case '/':
            if (operand2 != 0) 
            {
                result = operand1 / operand2;
                cout << operand1 << " " << operation << " " << operand2 << " = " << result << endl;
            } else 
            {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default: 
            cout << "Error: Invalid operation" << endl;
            break;
    }

    return 0;
}