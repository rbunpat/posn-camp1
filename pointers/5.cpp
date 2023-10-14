#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main() {

    int x, y;
    cin >> x >> y;

    cout << "Before swap: " << x << " " << y << endl;
    swap(&x, &y);
    cout << "After swap: " << x << " " << y << endl;
    

    return 0;
}