#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b;

    cin >> a >> b;

    if (a < b) {
        cout << fixed << setprecision(2) << a << " less than " << b;
    } else if (a > b) {
        cout << fixed << setprecision(2) << a << " greater than " << b;
    } else {
        cout << fixed << setprecision(2) << a << " equal " << b;
    }

    return 0;
}