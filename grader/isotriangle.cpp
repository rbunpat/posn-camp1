#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;

    cin >> n;
    

    for (i=n; i>=1; i--) {
        for (int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for (int j=2; j<=i * 2; j++) {
            cout << "*";
        }
        for (int j=2; j<=n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}