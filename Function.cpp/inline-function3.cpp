/*Write a C++ program to calculate electricity bill amount.*/


#include <iostream>
using namespace std;

float calculateBill(int unitConsumed ,float Rate = 12.5   ){

    return ( unitConsumed * Rate);

}
 
int main() {
    
int units = 250;

cout<<" If you consumed " <<units<<" units your electercity bill is Rs : "<<calculateBill(units)<<endl;
cout<<" For Commercial Customer. If you consumed "<<units<<" units, your electricity bill is Rs :"<<calculateBill(units , 15.0)<<endl;




    return 0;
}