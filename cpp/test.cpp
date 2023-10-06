#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b > c) {
        cout << a;
    } else if (b > c) {
        cout << b;
    } else {
        cout << c;
    }
    // if (a > b) {
    //     maxNum = a;
    // } else {
    //     maxNum = b;
    // }

    // // if (b > a) {
    // //     maxNum = b;
    // // }

    // if (maxNum > c) {
    //     maxNum = maxNum;
    // } else {
    //     maxNum = c;
    // }

    // // if (maxNum < c) {
    // //     maxNum = c;
    // // }

    // cout << maxNum;

    return 0;
}