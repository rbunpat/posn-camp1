#include <bits/stdc++.h>

using namespace std;

int main() {
    char gender;
    int height;
    cin >> gender >> height;

    if (toupper(gender) == 'M') {
        if (height >= 180) {
            cout << "basketball";
        }
    }

    if (toupper(gender) == 'F') {
        if (height >= 170) {
            cout << "Volleyball";
        }
    }

    return 0;
}