#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    string triangleType;

    cin >> a >> b >> c;

    if (a == b && b == c) {
        triangleType = "equilateral";
    } else if ((a != b && b == c) || (a == b && b != c) || (a == c && c != b)) {
        triangleType = "isosceles";
    } else {
        triangleType = "scalene";
    }

    cout << triangleType;

    return 0;
}