#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, nuggetCount = 0;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i % 6 == 0 || i % 9 == 0 || i % 20 == 0 ) {
            if (i != 0)
            cout << i << "\n";
        }
    }

    if (nuggetCount == 0) {
        cout << "no";
    }

    return 0;
}