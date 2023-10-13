#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[3][3];

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> x[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << x[i][j] << "|";
        }
        cout << endl;
    }


    

    if (x[1][1] == 1 && x[2][2] == 1 && x[0][0] == 1) {
        cout << "Identity Matrix" << endl;
    } else {
        cout << "Not Identity Matrix" << endl;
    }

    return 0;
}