#include <iostream>
using namespace std;



int sum(int a , int b){
 int c =a + b;
return c;

}
//this will not swap a and b because the a and b are actual variable so their values are copy in swap.
void swap ( int a , int b ){// value of ....temp   a    b
    int temp= a;  
    a = b;                  //                5     5   7               
    b = temp;               //                5     7   7
                            //                5     7   5
}
/*-----Call By Reference Using C++ reference variables.------*/
/*int &*/
void swapReferenceVar ( int &a , int &b ){// value of ....temp   a    b
    int temp= a; 
    a = b;                  //                 5     5   7               
   b = temp;               //                5     7   7
  // return a;                //                5     7   5
}




int main() {



int a = 5 , b = 7 ;
//cout << "The sum of 8, 9 is: "<<sum( a , b)<<endl;
cout<<" THe value of  a is: "<< a <<" and the value of the b is:"<<b<<endl;

//swap(a,b);.....................this will not swap a and b 
swapReferenceVar(a, b);  //= 666; //swapPointer( &a ,&b );......this will swap a and b using pointers refernce.
 //......this will swap a and b using  refernce reference variable.
cout<<" THe value of  a is: "<< a <<" and the value of the b is:"<<b<<endl;






    return 0;
}