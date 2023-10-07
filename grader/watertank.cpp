#include <bits/stdc++.h>

using namespace std;

int main() {
    double moneyIn, waterAmount;
    int twentyTank, fiveTank, oneTank;

    cin >> moneyIn;

    if (moneyIn < 21) {
        waterAmount = moneyIn / 10;
    } else if (moneyIn < 41){
        waterAmount = moneyIn / 8;
    } else if (moneyIn < 61){
        waterAmount = moneyIn / 6;
    } else if (moneyIn < 100){
        waterAmount = moneyIn / 5;
    } else {
        waterAmount = moneyIn / 3;
    }

    cout << waterAmount << endl;

    waterAmount = ceil(waterAmount);
    twentyTank = waterAmount / 20;
    waterAmount -= twentyTank * 20;
    fiveTank = waterAmount / 5;
    waterAmount -= fiveTank * 5;
    oneTank = waterAmount;

    cout << twentyTank << " " << fiveTank << " " << oneTank << endl;


    return 0;
}