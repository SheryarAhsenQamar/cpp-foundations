#include <iostream>
using namespace std;
/* function Prototype
 type function-name (arguments);
 int sum (int a , int b );------->Acceptable
int sum (int a , b );------>Not Acceptable*/
int sum (int , int );   //------>Not Acceptable
 void g(void);

 int main() {
     //.................................................................................................................................................................................... 
int num1 , num2;

cout<< "Enter the first number:"<<endl;
cin>>num1;
cout<< "Enter the second number:"<<endl;
cin>>num2;
//here the num1 and the num2 are the acctual paremeters.
cout<< "The sum is:"<< sum(num1, num2)<<endl;
g();
    return 0;               /*Actual Parameters :(Arguments)	Values you pass when calling a function
                             formmal Parameters	:Variables that receive those values inside the function*/
}

int  sum (int a , int b){
                               //here the  formal paremeter a and b are taking values from the actual paremeters.num1 and num2.  
int c = a+b;
return c;

}
void g( ){

cout<<"\nheloo"<<endl;


}