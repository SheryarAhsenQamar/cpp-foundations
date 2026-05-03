#include <iostream>
using namespace std;

  int product( int a , int b){
/*The purpose of an inline function is not to change what your program does, 
but how efficiently it runs.Inline function ka purpose output change karna nahi hota, balky small functions ko faster banana hota hai by avoiding function call overhead.

Output same hota hai. Journey different hoti hai
Suppose you have calculator buttons.

Without inline:

You press button → signal goes to another room → calculation happens → result comes back.

With inline:

Calculation happens directly inside button circuit.

Same result. Faster route.*/
static int c =0;
c = c+1;
return a*b+c;


}


int main() {
    
int a , b ;
cout<<"Enter the value of  A :"<<endl;
cin >> a ;
cout<<"Enter the value of  B : "<<endl;
cin >> b;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;
cout<<"The product of  A and B is : "<<product(a , b)<<endl;


    return 0;
}