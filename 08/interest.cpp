#include <bits/stdc++.h>

using namespace std;

int main() {
    double startMoney, interestRate, years, endMoney;
    int i;

    cin >> startMoney >> interestRate >> years;

    endMoney = startMoney;

    for (i=1; i<=years; i++) {
        endMoney += endMoney * (interestRate / 100);

    }

    cout << fixed << setprecision(2) << endMoney;

    return 0;
}