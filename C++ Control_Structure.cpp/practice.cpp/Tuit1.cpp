// IF__else practice Program No.01

//  Exercise 1 — Grade Checker
//  Take a number (marks out of 100)
//  If marks are 90 or above, print "A Grade".
//  If 70 or above, print "B Grade". If 50 or above, print "C Grade".
//  Otherwise print "Fail".
#include <iostream>
using namespace std;

int main(){
cout<<"The total marks are 100:"<<endl;

int marks;

cout<<"Enter your Marks:"<<endl;

cin>>marks;

if (marks>=90)
cout<<"Grade A"<<endl;

else if (marks>=70){
cout<<"Grade B"<<endl;

}

else if (marks>=50){
cout<<"Grade C"<<endl;

}



else{
    cout<<"Fail"<<endl;
}



return 0;
}