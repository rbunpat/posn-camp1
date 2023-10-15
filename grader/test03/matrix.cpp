#include <bits/stdc++.h>

using namespace std;

int main() {
    int row, column;
    cin >> row >> column;

    int matrix[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix[i][j];
        }
    }

    int multiplyBy;
    cin >> multiplyBy;

    //cout original matrix

    cout << "Matrix:" << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    cout << "Transposed:" << endl;

    //transpose matrix
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Matrix * " << multiplyBy << ":" << endl;
    //transposed + doubled
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << matrix[j][i] * multiplyBy << " ";
        }
        cout << endl;
    }


    return 0;
}