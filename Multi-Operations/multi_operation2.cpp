#include <iostream>   
using namespace std;  

int main() {
    int num1, num2;   

    
    cout << "Enter first number: ";
    cin >> num1;       

    
    cout << "Enter second number: ";
    cin >> num2;      
    int sum = num1 + num2;          
    int difference = num1 - num2;   
    int product = num1 * num2;  

    
    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << difference << endl;
    cout << "Multiplication: " << product << endl;

    
    return 0;  
}