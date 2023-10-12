#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    int a = 0, b = 1, c, i;
    if (n == 0) {
        cout << 0;
    }
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b;

    return 0;
}