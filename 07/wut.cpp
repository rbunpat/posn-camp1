#include <bits/stdc++.h>

using namespace std;

int main() {
    int bruh;

    cin >> bruh;

    if (bruh % 5 == 0 && bruh % 7 == 0 && bruh % 13 == 0) {
        cout << "A";
    } else if (bruh % 2 == 0 && bruh % 3 == 0 && bruh % 7 == 0) {
        cout << "B";
    } else {
        cout << "C";
    }

    return 0;
}