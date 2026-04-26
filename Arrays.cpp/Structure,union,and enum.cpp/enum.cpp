
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





