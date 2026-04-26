//structure program of the c++
#include <iostream>
using namespace std;

/*typedef*/ struct employee // we can also use the typedef before the struct and the ep at the last.
{                 //for the shorcut
int eId;
char favchar;
float salary;

}/*ep*/;

int main()  
{
    // when we use the typedef so here we dont write struct employee.... we only write ep.sheryar or any other name.but with every name we use ep.
struct employee sheryar ; // <-----here we can add more names and thes their cout speraltely.
sheryar. eId = 3;
sheryar.favchar = 'c';
sheryar.salary =  12000000;

 cout << "the value is :"<< sheryar.eId<<endl;
 cout << "the value is :"<< sheryar.favchar<<endl;
 cout << "the value is :"<< sheryar.salary<<endl;

    return 0;
} 