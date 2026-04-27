//Function & and the function parameters:
/*   A function is simply a block of code that performs a specific task and can be used again and again.

    Instead of writing the same logic multiple times, you write it once inside a function  
    and just call it whenever needed. */

 #include <iostream>
 using namespace std;
 
int  sum (int a , int b){
int c = a+b;
return c;

}


 int main() {
     
int num1 , num2;

cout<< "Enter the first number:"<<endl;
cin>>num1;
cout<< "Enter the second number:"<<endl;
cin>>num2;
cout<< "The sum is:"<< sum(num1, num2)<<endl;

/*<------------------------------------------------------------------------------------->*/



return 0;
 }