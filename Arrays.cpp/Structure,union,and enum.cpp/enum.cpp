// In a normal struct, each member gets its own memory.
// But in a union, all members use one common memory block.
// So at any time, a union can store only one value (the last assigned one).

/*<---------------------------------**------------------------------------------------>*/


#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    d.i = 10;
    cout << "Integer: " << d.i << endl;

    d.f = 5.5;
    cout << "Float: " << d.f << endl;

    d.c = 'A';
    cout << "Character: " << d.c << endl;

    return 0;
}





