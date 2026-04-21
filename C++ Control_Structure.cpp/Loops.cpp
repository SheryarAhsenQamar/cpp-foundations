//loops and their types:
//simply we can say that loops are blocks of the statements use to do any work repeatidly.

#include <iostream>
using namespace std;

int main(){
/*Loops in C++ :
There are three types of loops in c++ :

1. FoR loop
2. While loop
3. do-While loop

*/
/*FOR Loop in C++ :*/

/*int i=1;
cout<<i;
i++;*/
/* Syntax for the FOR loop:

for (initialuization;  condition ; upadation;)
{
loop Body ( C++ code );

} */

// for (int i = 1; i <= 50; i++)
//{

        /* code */ 

//    cout<<i<<endl; 
  // } 


//Example of INFnIte For loop:

/*for (int i = 1;  39<= 50; i++)
{
//here in above line i add 39<50 so its true but start a infinte loop which is dangerous.

        /* code */

  /**cout<<i<<endl;
}

*/

/*2.WHILE Lopps in C++ :

Syntax:
  
while(condition :)
{


c++ statements;


}
*/

//printing 1 to 40 using While loop:
/*
int i=1;

 while(i<=40){

   cout<<i<<endl;
   i++;


}*/

// infinite WHILE Loop:


/*int i=1;

while(true)

cout<<i<<endl;
i++;*/


/*  3. do_ While Loop : */

/*Syntax:
  
  do 
{


c++ statements;
while(condition;
{

}

*/

int i=1;

 do {

   cout<<i<<endl;
     i++; 
    }
while(i<=40) ;

// so the differenceb/w while and do while is that if in the do while condition if false ( while (FALSE)
// //BUT LOOP ONE TIME START AND then check conditiion but this not happen in while.

/*

 A Example do while if condition is false:

int i=1;

 do {

   cout<<i<<endl;
     i++; 
    }
while(false) ;


*/
    return 0;
}