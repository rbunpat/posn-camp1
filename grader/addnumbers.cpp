#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, nSave;
    cin >> n;

    nSave = n;

    for (int i = 0; i <= n; i++) {
        cout << i << "+" << n - i << "=" << n << endl;
    }

    return 0;
}