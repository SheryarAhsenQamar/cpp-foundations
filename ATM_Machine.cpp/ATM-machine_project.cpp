#include <iostream>
#include <windows.h>
using namespace std;





int main() {
    
char choice;
int pin = 1234;
int enteredPin;
float balance = 400;
float amount;


    cout << "===================================\n";
    cout << "  WELlCOME TO ATM MACHINE SYSTEM       \n";
    cout << "===================================\n";


    Sleep(2000);

    string msg = "Please insert your ATM card...\n";

    for (char ch : msg) {
        cout << ch;
        Sleep(30); 
    }
Sleep(3000);
        cout << "Processing";

    for(int i = 0; i < 6; i++)
    {
        cout << ".";
        Sleep(500);

        cout << "\b \b \b";
        Sleep(500);
    }

cout<<endl; //fort space

cout<<" A.Deposit Money"<<endl;
cout<<" B.Withdraw money"<<endl;
cout<<" C.Check Balance\n"<<endl;
Sleep(1000);
cout<<"Enter your choice"<<endl;
cin>>choice;

switch(choice)
{

case 'A':
case 'a':
    cout << "Enter the amount to deposit :" << endl;
    cin >> amount;

    balance += amount;

    cout << "Processing Deposit.";

    cout << endl;

    for(int i = 0; i < 6; i++)
    {
        cout << ".";
        Sleep(500);
        cout << "\b \b";
        Sleep(500);
    }

    cout << "Your Amount is deposited successfully." << endl;
    Sleep(2000);
    cout << "Thank you for using our banking service.\n";
    Sleep(2000);
    break;


case 'B':
case 'b':

    cout << "Enter PIN:" << endl;
    cin >> enteredPin;
Sleep(2000);
    if (enteredPin == pin)
    {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;

            cout << "Processing Withdrawl.";

            cout << endl;

            for(int i = 0; i < 6; i++)
            {
                cout << ".";
                Sleep(600);
                cout << "\b \b";
                Sleep(500);
            }

            cout << endl;
            cout << "Withdrawl Successfully.\n";
            cout << "Please collect your card.\n";
            Sleep(2000);
            cout << "Please collect your cash..\n";
            Sleep(2000);
          cout << "Thank you for using our banking service.\n";
          Sleep(2000);
        }
        else
        {
            cout << "Sorry! Insufficient balance in your account.\n";
        }
    }
    else
    {
        cout << "Incorrect PIN. Access denied.\n";
    }

    break;


case 'C':
case 'c':

    cout << "Enter Pin\n";
    cin >> enteredPin;

    if(enteredPin == pin)
    {
        cout << "Fetching Balance.";

        cout << endl;

        for(int i = 0; i < 6; i++)
        {
            cout << ".";
            Sleep(600);
            cout << "\b \b";
            Sleep(500);
        }

        cout << endl;

        if(balance == 0)
        {
            cout << "Sorry! Your account balance is currently zero.\n";
        }
        else
        {
            cout << "Your current balance is: Rs " << balance << endl;
            Sleep(2000);
            cout << "Thank you for using our banking service.\n";
            Sleep(2000);
        }
    }
    else
    {
        cout << "Incorrect PIN. Access denied.\n";
    }

    break;


default:
    cout << "Invalid choice. Please select A, B, or C.\n";

}   
return 0;
}