#include <bits/stdc++.h>

using namespace std;

int main() {
    int jjMoney, prettyFactor, necklacePrice;

    cin >> jjMoney >> prettyFactor >> necklacePrice;
    //add get request here, get example.com?a=jjmoney&b=prettyfactor&c=necklaceprice

    string buyStatus = "NO";

    if (prettyFactor > 70 && necklacePrice >= 5000 & jjMoney >= necklacePrice) {
        buyStatus = "YES";
    }


    cout << jjMoney - necklacePrice << endl;
    cout << buyStatus;

    return 0;
}