#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n;

    cin >> n;

    // for(i = 1; i <= n; i++) {
    //     cout << string(i, '*') << endl;
    // }

    for (i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}