#include <bits/stdc++.h>

using namespace std;

int main() {
    int masterNumber;

    cin >> masterNumber;

    for (int i = 1; i <= 12; i++) {
        cout << masterNumber << " x " << i << " = " << masterNumber * i << endl;
    }

    return 0;
}