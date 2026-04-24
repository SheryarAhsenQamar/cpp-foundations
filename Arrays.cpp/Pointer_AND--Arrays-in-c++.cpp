#include <iostream>
using namespace std;

int main() {
    
int marks[6] ={ 45, 55, 34 , 23 , 90 , 54, };

//..........Pointers AND Arrays............

int *s =marks;
/*here i use the (*s) which is the pointer */
cout << "The value of *s is: "<<*s<<endl;
cout << "The value of *(s+1)is: "<<*(s+1)<<endl;
cout << "The value of *(s+2) is: "<<*(s+2)<<endl;
cout << "The value of *(s+3) is: "<<*(s+3)<<endl;
cout << "The value of *(s+4) is: "<<*(s+4)<<endl;
cout << "The value of *(s+5)is: "<<*(s+5)<<endl;






    return 0;
}