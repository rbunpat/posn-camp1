#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i = 0;
    cin >> n;
    float arr[n], data;

    for (auto &x : arr) {
        cin >> x;
    }

    sort(arr, arr + n);

    //find the median
    if (n % 2 == 0) {
        cout << float((arr[n / 2] + arr[(n / 2) - 1]) / 2);
    } else {
        cout << float(arr[n / 2]);
    }





    return 0;
}