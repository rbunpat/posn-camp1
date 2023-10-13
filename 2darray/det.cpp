#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[2][2];

    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> x[i][j];
        }
    }

    int det = (x[0][0] * x[1][1]) - (x[0][1] * x[1][0]);

    cout << "Det(A) = " << det << endl;

    return 0;
}