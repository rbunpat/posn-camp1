#include <bits/stdc++.h>

using namespace std;

int main() {
    char payType;
    int payAmount, workAge, bonusAmount;

    cin >> payType >> workAge >> payAmount;

    payType = toupper(payType);

    switch (payType) {
        case 'M':
        bonusAmount = 1500;
        break;
        case 'B':
        bonusAmount = 1000;
        break;
        case 'G':
        bonusAmount = 500;
        break;
    }

    if (payAmount < 30000){
        bonusAmount += 1500;
    } else if (payAmount < 50000) {
        bonusAmount += 1000;
    } else {
        bonusAmount += 500;
    }

    if (workAge >= 10) {
        bonusAmount += (payAmount * 10) / 100;
    } else {
        bonusAmount += (payAmount * 7) / 100;
    }

    cout << bonusAmount;
    return 0;
}