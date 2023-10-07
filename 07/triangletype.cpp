#include <bits/stdc++.h>

using namespace std;

int main() {
    int side1, side2, side3;

    cin >> side1 >> side2 >> side3;

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        if (side1 == side2 && side2 == side3) {
            cout << "regular";
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "symmetric";
        } else {
            cout << "irregular";
        }
    } else {
        cout << "not a triangle";
    }


    return 0;
}