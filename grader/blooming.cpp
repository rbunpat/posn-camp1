#include <bits/stdc++.h>

using namespace std;

int main() {
    int jjMoney, prettyFactor, necklacePrice;

    cin >> jjMoney >> prettyFactor >> necklacePrice;

    string buyStatus = "NO";

    if (prettyFactor > 70 && necklacePrice >= 5000 && jjMoney >= necklacePrice) {
        buyStatus = "YES";
    }


    cout << jjMoney - necklacePrice << endl;
    cout << buyStatus;

    return 0;
}
