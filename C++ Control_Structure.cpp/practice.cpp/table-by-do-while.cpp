#include <iostream>
using namespace std;

int main() {
    int num = 6;
    int i = 1;

    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while(i <= 10);

    return 0;
}