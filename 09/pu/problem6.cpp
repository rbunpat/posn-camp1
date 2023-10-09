#include <bits/stdc++.h>

using namespace std;

int main() {
    int side1, side2, side3;

    while (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        cin >> side1 >> side2 >> side3;
    }

    cout << side1 + side2 + side3;

    return 0;
}