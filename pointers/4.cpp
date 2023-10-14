#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 1, y = 2;
    int *p, *q;

    p = &x;
    y = *p;

    *p = 0;
    y = 5;
    p = &y;
    *p = 3;
    q = p;

    cout << x << " " << y << " " << endl;
    cout << p << " " << q << " " << endl;

    return 0;
}