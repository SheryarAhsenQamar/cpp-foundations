#include <iostream>
 using namespace std;

 int main(){
     int a =4 , b=6;
    cout<<"operators in c++:"<<endl;
   cout<<" Following are the type operators in c++:"<<endl;

// Arthematic operator


cout<< "The value of a + b is :"<< a+b<<endl;
cout<< "The value of a - b is :"<< a-b<<endl;
cout<< "The value of a * b is :"<< a*b<<endl;
cout<< "The value of a / b is :" << a/b<<endl;
cout<< "The value of a % b is :"<< a%b<<endl;
cout <<endl;
// Incriment and Decriment operator:
cout<< "The value of a ++  is :"<< a++<<endl; 
cout<< "The value of a --  is :"<< a--<<endl;
cout<< "The value of a ++a is :"<< ++a<<endl;
cout<< "The value of   --a is :"<< --a<<endl;
 cout<<endl;


//Assignment operators:----->>use to assign value to variable

// int a=6 , b=8;
//  char d='c';

// ------------------------------------------------------------------

//   Comparison Operators:

 cout<<" Following are the Comparison operators in c++:"<<endl;

cout <<"The value of a==b is:"<<(a==b)<<endl;
cout <<"The value of a > b is:"<<(a>b)<<endl;
cout <<"The value of a < b is:"<<(a<b)<<endl;
cout <<"The value of a >= b is:" <<(a>=b)<<endl;
cout <<"The value of a <= b is:"<<(a<=b)<<endl;
cout <<"The value of a != b is:"<<(a!=b)<<endl;
cout<<endl;

// logical operators:


cout<<"The value of this logical and operator ((a==b)   &&  (a>b))  is : "<<((a==b)   &&  (a>b))<<endl;


cout<<"The value of this logical or Operator ((a=b)   ||  (a>b))   is: "<<((a==b)   || (a>b))<<endl;


cout << "The value of this logical NOT operator (!(a==b)) is: " << (!(a==b)) << endl;




    return 0;
 }
