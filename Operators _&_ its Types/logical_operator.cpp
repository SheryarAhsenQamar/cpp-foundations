#include <iostream>
using namespace std;

int main (){

int a = 5, b = 2;


cout <<"There are three type of logical Opertor"<<endl; 
cout<<endl;
cout <<"1.AND__Operator"<<endl;

cout<<"The value of this logical AND Operatoris:"<<((a == b ) && (a> b))<<endl;


cout<<"2.OR__Operator"<<endl;


cout<<"The value of this logical OR operator is:"<<((a == b ) || (a> b))<<endl;



cout <<"3.NOT__Operator"<<endl;

cout<<"The value of this logical NOT Operator is:"<<(!(a==b))<<endl;

 return 0;
}