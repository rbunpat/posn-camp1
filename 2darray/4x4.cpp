#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[4][4];
    int diagonal1, diagonal2, sum;

    diagonal1 = diagonal2 = 0;

    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> x[i][j];
        }
    }

    diagonal1 = x[0][0] + x[1][1] + x[2][2] + x[3][3];
    diagonal2 = x[0][3] + x[1][2] + x[2][1] + x[3][0];

    sum = diagonal1 - diagonal2;

    cout << "Sum of diagonals: " << sum << endl;
    return 0;
}