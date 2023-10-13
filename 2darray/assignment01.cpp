#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int x[3][3];
    
    // ADD NUMBERS TO X
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> x[i][j];
        }
    }

    // PRINT NUMBERS IN X
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << x[i][j] << " ";
        }
    }

    return 0;
}