#include <bits/stdc++.h>

using namespace std;

int main() {
    int masterNumber, masterNumber2;

    cin >> masterNumber >> masterNumber2;

    int bruh;
    bruh = 1;

    do {
        cout << masterNumber << " * " << bruh << " = " << masterNumber * bruh << endl;
        bruh++;

    } while (bruh <= masterNumber2);

    return 0;
}