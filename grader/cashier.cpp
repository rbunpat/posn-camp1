#include <bits/stdc++.h>

using namespace std;

int main() {
    int itemCount, totalPrice, itemPrice;

    itemPrice = 0;
    itemCount = 0;

    do {
        cin >> itemPrice;
        totalPrice += itemPrice;
        itemCount ++ ;
    } while (itemPrice != 0);

    cout << itemCount - 1 << endl;
    cout << totalPrice << endl;

    return 0;
}