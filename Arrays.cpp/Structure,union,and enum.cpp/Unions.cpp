// In C++, a union is a user-defined data type (just like a struct), but with one important difference:
// all members share the same memory location.

//🔹 Why we use it

// When we don’t need all values at the same time

// only one value is stored at a time
// This helps in reducing memory usage


#include <iostream>
using namespace std;
union money {
    int rice ;
    float car;
    char pound;
};
int main() {
    
  union money m1;

m1.rice = 34;


cout << m1.rice <<endl;
    return 0;
}


    
    