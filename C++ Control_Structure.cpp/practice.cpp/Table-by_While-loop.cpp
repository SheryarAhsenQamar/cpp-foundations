#include <iostream>
using namespace std;

int main() {
    int num = 6;
    int i = 1;

    while(i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;  // move to next number
    }

    return 0;
}