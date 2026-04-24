/*-->..Arrays And Pointer Arthematic..<--
ARRAYS:
    ---->Basically the arrays are collection of item of similar type store in the contigous memory location
    ---->sometimes a simple variable is not enough to hold all the data.*/


#include <iostream>
using namespace std;

int main() {
    //here the six marks we take so we write 6 in the array.
int marks[6] ={ 45, 55, 34 , 23 , 90 , 54, };

cout << ".........These are  the  marks:.........."<<endl;

cout<<marks[0]<<endl;
cout<<marks[1]<<endl;   // here we use the no 0,1,2,3,4,5 because the 
cout<<marks[2]<<endl;   // the machine staert numbering from zero and and upto so on.
cout<<marks[3]<<endl;   
cout<<marks[4]<<endl;
cout<<marks[5]<<endl;

/*.........Another Way to use Array..........*/

int mathmarks[4];


mathmarks[0] = 211;
mathmarks[1] = 312;
mathmarks[2] = 413;
mathmarks[3] = 513;

cout << ".........These are  the Math marks:.........."<<endl;

cout<<mathmarks[0]<<endl;
mathmarks[1] = 444;//  we can cahnge the value of an array here we use the mathmarks [2]=444 its pupose isthat we can change the vslue in the array.
                // so in the output the value of the of mathmarks[1(acutually 2)] is not 312 but show 444.
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;   
cout<<mathmarks[3]<<endl;   



    return 0;
}
