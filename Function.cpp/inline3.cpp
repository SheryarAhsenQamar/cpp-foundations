#include <iostream>
using namespace std;

int Membership(  int months  ,  int feepermonth  = 2000){

return ( months * feepermonth);

}
int main() {
    int months = 5;

cout<<"If you join gym for"<<months<<" months, your total fee is Rs: "<<Membership(months)<<endl;
cout<<"For Premium Member:If you join gym for"<<months<< " months, your total fee is Rs:"<<Membership(months , 3500)<<endl;


    return 0;
}