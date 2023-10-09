#include <bits/stdc++.h>

using namespace std;

int main() {
    int fishCount, bruh, i;

    double fishPrice, moneyRecieved, change;

    cin >> fishCount;

    for (i = 1; i <= fishCount; i++) {
        cin >> bruh;
        fishPrice += bruh;
    }

    cin >> moneyRecieved;

    change = moneyRecieved - fishPrice;

    if (change < 0) {
        cout << "Total : " << fishPrice << endl;
        cout << "Error";
        return 0;
    } else {
        cout << "Total : " << fishPrice << endl;
        cout << "Successfully" << endl;
        cout << "Change : " << change << endl;
        cout << "Thankyou";
        return 0;
    }


    return 0;
}