#include <bits/stdc++.h>

using namespace std;

bool a[101], b[101];

int main() {
    
    int n;
    cin >> n;

    a[6] = a[9] = a[20] = true;

    if (n < 6) {
        cout << "no";
        return 0;
    }

    for (int i = 1; i <= 100; i++) {
        if (i > 6) {
            if (a[i - 6]) {
                a[i] = true;
            }
        }
        if (i > 9) {
            if (a[i - 9]) {
                a[i] = true;
            }
        }
        if (i > 20) {
            if (a[i - 20]) {
                a[i] = true;
            }
        }
        if (a[i]) {
            cout << i << endl;
        }
        if (i == n) {
            return 0;
        }
    }

    return 0;
}