#include <iostream>
using namespace std;

// ---------------- CALL BY VALUE ----------------
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value function: " << x << endl;
}


// ---------------- CALL BY REFERENCE ----------------
void callByReference(int &y)
{
    y = y + 10;
    cout << "Inside Call by Reference function: " << y << endl;
}


int main()
{
    int num1 = 5;
    int num2 = 5;

    // Call by Value
    cout << "===== CALL BY VALUE =====" << endl;
    cout << "Before function call: " << num1 << endl;
    callByValue(num1);
    cout << "After function call: " << num1 << endl;

    
    cout << "\n\n";   // Space between both sections


    // Call by Reference
    cout << "===== CALL BY REFERENCE =====" << endl;
    cout << "Before function call: " << num2 << endl;
    callByReference(num2);
    cout << "After function call: " << num2 << endl;

    return 0;
} 