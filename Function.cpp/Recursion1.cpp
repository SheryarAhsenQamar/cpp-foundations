/*Factorial Type Statements
1. Book Arrangement Problem*/

#include <iostream>
using namespace std;

int arrangeBooks(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * arrangeBooks(n - 1);
}

int main() {
    int books;
    cout << "Enter number of books: ";
    cin >> books;

    cout << "Total arrangements are: " << arrangeBooks(books);

    return 0;
}

