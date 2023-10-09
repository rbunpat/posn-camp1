#include <bits/stdc++.h>

using namespace std;

int main() {
    int n1, n2, i, numberCount;

    numberCount = 0;

    cin >> n1 >> n2;

    for (i = n1; i <= n2; i++) {
        if (i % 7 == 2) {
            cout << i << endl;
            numberCount++;
        }
    }

    cout << numberCount;

    return 0;
}