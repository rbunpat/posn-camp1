#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n > 0) {
        if (n % 5 == 0) {
            cout << "BEEP" << endl;
        } else {
            cout << n << endl;
        }
        n--;
    }

    return 0;
}