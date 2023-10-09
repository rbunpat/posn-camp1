#include <bits/stdc++.h>

using namespace std;

int main() {
    int row, col, i, j;

    cin >> row >> col;

    // row = 3;

    for (i = 1; i <= row; i++) {
        if (i == 1) {
            for (j = 1; j <= col; j++) {
                cout << "T";
            }
            cout << endl;
            cout << endl;
        } else if (i == row) {
                for (j = 1; j <= col; j++) {
                cout << "T";
            }
        }
         else {
            cout << "T";
            for (j = 1; j <= col - 2; j++) {
                if (j % 2 == 0) {
                    cout << "*";
                } else {
                    cout << "x";
                }
            }
            cout << "T";
            cout << endl;
            cout << endl;
        }


    }


    // for (i = 1; i <= row; i++) {
    //     //if first row
    //     if (i == 1) {
    //         //draw first row
    //         for (i = 1; i <= col; i++) {
    //             cout << "T";
    //         }
    //         cout << endl;
    //     }
    //     //if last row
    //     else if (i == row) {
    //         //draw last row
    //         for (i = 1; i <= col; i++) {
    //             cout << "T";
    //         }
    //         cout << endl;
    //     }
    //     else {
    //         for (j = 1; j <= col; j++) {
    //             //if first column
    //             if (j == 1) {
    //                 cout << "T";
    //             }
    //             //if last column
    //             else if (j == col) {
    //                 cout << "T";
    //             }
    //             //if not first or last column
    //             else {
    //                 if (j % 2 == 0) {
    //                     cout << "x";
    //                 }
    //                 else {
    //                     cout << "*";
    //                 }
    //             }
    //         }
    //     }

    // }

    return 0;
}