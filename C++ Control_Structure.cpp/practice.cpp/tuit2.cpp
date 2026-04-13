// If__else Practice Program No.02
// Exercise 2 — 
// Take a number from the user. 
// Check if it is positive, negative, or exactly zero, and print the result.
// Check if it is positive, negative, or exactly zero, and print the result.


# include <iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the Number:"<<endl;
    cin>>num;
    if (num>0){
        cout<<"Positive "<<endl;

    }
else if (num<0){
    cout<<"Negative"<<endl;

}

else{

    cout <<"zero"<<endl;
}








    return 0;
}