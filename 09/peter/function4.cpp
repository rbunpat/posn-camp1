#include <bits/stdc++.h>

using namespace std;

int main() {
    int moneyAmount, onekBill, fivehBill, onehBill;

    onekBill = fivehBill = onehBill = 0;

    cin >> moneyAmount;

    if (moneyAmount % 100 != 0) {
        cout << "Try Again";
        return 0;
    }

    onekBill = moneyAmount / 1000;
    moneyAmount = moneyAmount - onekBill * 1000;

    fivehBill = moneyAmount / 500;
    moneyAmount = moneyAmount - fivehBill * 500;

    onehBill = moneyAmount / 100;
    moneyAmount = moneyAmount - onehBill * 100;

    if (onekBill > 0)
        cout << "1000 = " << onekBill << endl;
    if (fivehBill > 0)
        cout << "500 = " << fivehBill << endl;
    if (onehBill > 0)
        cout << "100 = " << onehBill << endl;

    // cout << "1000 = " << onekBill << endl;
    // cout << "500 = " << fivehBill << endl;
    // cout << "100 = " << onehBill << endl;


    return 0;
}