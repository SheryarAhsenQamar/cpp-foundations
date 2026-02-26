#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // calculations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    cout << "The sum of " << num1 << " and " << num2 << " is : " << sum << endl;
    cout << "The difference of " << num1 << " and " << num2 << " is : " << difference << endl;
    cout << "The product of " << num1 << " and " << num2 << " is :" << product << endl;

    
    return 0;
}