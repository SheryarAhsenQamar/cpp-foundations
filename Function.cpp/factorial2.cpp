#include <iostream>
using namespace std;

int badges(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * badges(n - 1);
}

int main() {
    int students;
    cout << "Enter total students: ";
    cin >> students;

    cout << "Total badge patterns: "<< badges(students);

    return 0;
}