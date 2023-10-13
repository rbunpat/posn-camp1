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
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    //print matrix x without transpose
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << x[j][i] << " ";
        }
        cout << endl;
    }
    
    // //transpose matrix a
    // for (int i = 0; i < 3; i++) {
    //     for(int j = i; j < 3; j++) {
    //         cout << x[j][i] << " l" << endl;
    //     }
    // }

    return 0;
}