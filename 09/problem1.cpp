#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;

    i = 1;

    cin >> n;

    while (i <= n) {
        cout << i << "  " << pow(2, i) << endl;
        i++;
    }

    return 0;
}