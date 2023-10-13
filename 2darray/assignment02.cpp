#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[3][3];
    int b[3][3];

    // ADD NUMBERS TO A
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    
    //add numbers to b
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }

    // add a to b

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            b[i][j] += a[i][j];
        }
    }

    // PRINT NUMBERS IN B
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << b[i][j] << " ";
        }
    }

    return 0;
}