#include <iostream>
using namespace std;

int main() {
 int a = 45;
 float b=67.9876;


cout<<"The value of a is :"<<(float)a<<endl;
// ..............OR..............
cout<<"The value of a is :"<<float(a)<<endl;


cout<<"The vlue of b is :"<<(int)b <<endl;
// ...............OR..............
cout<<"The vlue of b is :"<<int(b)<<endl;
 int c= int(b);

cout <<"|The exression is :"<<a+b<<endl;
cout <<"The  expression is:"<<a+ (int)b<<endl;






}
