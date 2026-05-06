//............Bank Account Interest Calculation..........
#include <iostream>
using namespace std;

float moneyRecieved(int currentmoney, float factor = 1.06) {
    return currentmoney * factor;
}

int main() {
    int money = 100000;

    cout << "If you have Rs: " << money
         << " in your Bank Account, then after 1 year you will receive Rs: "
         << moneyRecieved(money) << endl;

    cout << "For VIP. If you have Rs: " << money
         << " in your Bank Account, then after 1 year you will receive Rs: "
         << moneyRecieved(money, 1.1) << endl;

    return 0;
}