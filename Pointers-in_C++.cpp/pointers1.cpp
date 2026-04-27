#include <iostream>
using namespace std;

int main() {
    

//What is the Pointer:
//------>pointeris type of the data type that hold the data of other data types.

int a =3;

int*b =&a;

cout <<"the address of "<<&a<<endl;
cout<<"the adress of "<<b<<endl;

//  &-------> Address of Operator:
//  *--------->  (value at) dereference Operator:
cout<<"the value at address b is:"<<*b<<endl;

//here th (*b) store the value of its own which is 3 
//because above b=&a and a=3 so b value is a value.

cout <<"---------------------------"<<endl;
//Pointer to Po8inter 
//the process of storing data of one pointer to other pointer.

int**c=&b;

cout <<"the adress of b is:"<<&b<<endl;
cout <<"the Address of b is"<<c<<endl;
cout <<"the value at Address  c is "<<*c<<endl;
cout<<"the value T Adress value _at (value at(c))"<<**c<<endl;


    return 0;
}