#include <iostream>

using namespace std;
 int c=45;
int main() {
int a , b , c;

cout<< "Enter the vaue of a :"<<endl;
cin>> a ; 
cout<<"Enter the of b :"<<endl;
cin>> b;
  c=a+b;
cout<<"THE sum  is :"<<c<<endl;
cout <<"The global c is:"<< ::c;
// Here in above line we use the symbol :: is represent the scope resulation operator for output of global variable c=45;..
return 0;


}