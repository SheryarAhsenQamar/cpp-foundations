#include <iostream>
#include <windows.h>
using namespace std;

int main() {
int choice;
int n = 5;
int num = 1;
while(true){
cout<<"1.Print Simple pyramids of star: "<<endl;
cout<<"2.Print flipped simple pyramids of star: "<<endl;
cout<<"3.Print Inverted pyramids of star: "<<endl;
cout<<"4.Print Flippes Inverted pyramids of star: "<<endl;
cout<<"5.Print Triangle pattern of star : "<<endl;
cout<<"6.Print Inverted Triangle Pattern of Star:"<<endl;
cout<<"7.Print Half Diamond  Pattern of Star:"<<endl;
cout<<"8.Print Flipped Half Diamond  Pattern of Star:"<<endl;
cout<<"9.Print Diamond Pattern of Star:"<<endl;
cout<<"10.Print Hourglass Pattern of Star:"<<endl;
cout<<"11.Print number pyramids of Star:"<<endl;
cout<<"12.Print Rotated number pyramids of Star:"<<endl;
cout<<"13.Print pylindrome Triangle  of Star:"<<endl;
cout<<"14.Print Alphabet pyramids  of Star:"<<endl;
cout<<"15.Print Contineous Alphabetic Pyramids  of Star:"<<endl;
cout<<"16.Exit."<<endl;
cout<<"Enter Your Choice: "<<endl;
cin>>choice;
switch(choice) {

case 1:
    for(int row = 1; row <= 5; row++) {
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
         
    }
     Sleep(3000);      
    system("cls");
    break;

case 2:
    for(int row = 1; row <= 5; row++) {

        for(int space = 1; space <= 5-row; space++) {
            cout << "  ";
        }

        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
    }
     Sleep(3000);      
    system("cls");
    break;
case 3:
    for(int row = 1; row <= n; row++) {

        for(int col = 1; col <= n - row + 1; col++) {
            cout << "* ";
        }

        cout << endl;
    }
     Sleep(3000);      
    system("cls");
break;
case 4:
 for(int row = 1; row <= n; row++) {
    
        for(int space = 1; space <= row - 1; space++) {
            cout << "  ";
        }

        
        for(int col = 1; col <= n - row + 1; col++) {
            cout << "* ";
        }

        cout << endl;
    }
     Sleep(3000);      
    system("cls");

    break;

    case 5:
    
    for(int row = 1; row <= n; row++) {
        
        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout<<endl;
    }
     Sleep(3000);      
    system("cls");
    break;
    
case 6:

for(int row = 1; row <= n; row++) {

    for(int space = 1; space <= row - 1; space++) {
        cout << " ";
    }

    for(int col = 1; col <= n - row + 1; col++) {
        cout << "* ";
    }

    cout << endl;
} Sleep(3000);      
    system("cls");

break;

case 7:
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    
    for(int row = n - 1; row >= 1; row--) {
        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
 Sleep(3000);      
    system("cls");
    break;

case 8:

    for(int row = 1; row <= n; row++) {

        for(int space = 1; space <= n - row; space++) {
            cout << "  ";
        }

        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
    }

    
    for(int row = n - 1; row >= 1; row--) {

        for(int space = 1; space <= n - row; space++) {
            cout << "  ";
        }

        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
    }
     Sleep(3000);      
    system("cls");
break;

case 9:
    for(int row = 1; row <= n; row++) {

        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
    }
    for(int row = n - 1; row >= 1; row--) {

        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
    }

     Sleep(3000);      
    system("cls");
break;
 
case 10:
   for(int row = 1; row <= n; row++) {

        for(int space = 1; space <= row - 1; space++) {
            cout << " ";
        }

        for(int col = 1; col <= n - row + 1; col++) {
            cout << "* ";
        }

        cout << endl;
    }
    for(int row = 1; row <= n; row++) {

        for(int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        for(int col = 1; col <= row; col++) {
            cout << "* ";
        }

        cout << endl;
    }
     Sleep(3000);      
    system("cls");
break;

case 11:


    for(int row = 1; row <= n; row++) {

        for(int col = 1; col <= row; col++) {
            cout << row;
        }

        cout << endl;
    }
     Sleep(3000);      
    system("cls");
break;

case 12:

 
    for(int row = 1; row <= n; row++) {


        for(int space = 1; space <= n - row; space++) {
            cout << "  ";
        }

        
        int num = row;

        for(int col = 1; col <= row; col++) {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }
 Sleep(3000);      
    system("cls");

break;




case 13:

    for(int row = 1; row <= n; row++) {

    
        for(int space = 1; space <= n - row; space++) {
            cout << "  ";
        }

        
        int num = row;
        for(int col = 1; col <= row; col++) {
            cout << num << " ";
            num++;
        }

        
        num = num - 2;
        for(int col = 1; col <= row - 1; col++) {
            cout << num << " ";
            num--;
        }

        cout << endl;
    }
 Sleep(3000);      
    system("cls");
    break;



case 14:
{
char ch= 'A';

    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= row; col++) {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    
}
}
     Sleep(3000);      
    system("cls");
break;
case 15:
{
    char ch= 'A';
for (int row = 1; row <= 4; row++) {

        for (int col = 1; col <= row; col++) {
            cout << ch << " ";
            ch++;   
        }

        cout << endl;
    }
}
     Sleep(3000);      
    system("cls");
break;
default:
    cout << "Program exited." << endl;

  Sleep(3000);      
  system("cls");
}
}
}