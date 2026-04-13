#include <iostream>
using namespace std;

int main(){

    int age;   // declare variable
    cout << "Enter your age: ";
    cin >> age;

    switch(age)
    {
        case 20:
            cout << "You are 20" << endl;
            break;
//here we use the "Break" to stop that means where result matvh stop there ..
        case 17:
            cout << "You are 17" << endl;
           break;
//if we dont use "break" after each case all cases results print in output..
        case 10:
            cout << "You are 10" << endl;
            break;

        default:
            cout << "No Special Case" << endl;
    }

    return 0;
}