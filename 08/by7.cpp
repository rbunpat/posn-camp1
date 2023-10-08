#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n;
    cin >> n;

    for (i = 1; i <= n; i++) {
        if (i % 7 != 0) {
            cout << i << endl;
        } else {
            break;
        }
    }

    return 0;
}