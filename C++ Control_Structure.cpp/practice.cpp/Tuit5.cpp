//  Switch_Practice-program No.02
//  Take two numbers and an operator symbol (+, -, *, /).
//  Use switch on the operator to print the result of the calculation.
#include <iostream>
using namespace std;

int main(){45

    int num1, num2;
    char op;
    int result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            cout << "Invalid Operation" << endl;
            return 0;
    }

    cout << "Result = " << result << endl;

    return 0;
}
