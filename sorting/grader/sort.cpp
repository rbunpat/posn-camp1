#include <bits/stdc++.h>

using namespace std;

int main() {
    float totalHeight, medianHeightA, medianHeightB, medianHeight;
    int inputCountA, inputCountB;

    cin >> inputCountA;

    float heightsA[inputCountA];
    int heightsASize = sizeof(heightsA) / sizeof(heightsA[0]);

    for (int i = 0; i < inputCountA; i++) {
        cin >> heightsA[i];
    }

    cin >> inputCountB;

    float heightsB[inputCountB];
    int heightsBSize = sizeof(heightsB) / sizeof(heightsB[0]);

    for (int i = 0; i < inputCountB; i++) {
        cin >> heightsB[i];
    }

    sort(heightsA, heightsA + heightsASize);
    sort(heightsB, heightsB + heightsBSize);

    //check if len array is even or odd

    if (heightsASize % 2 == 0) {
        medianHeightA = (heightsA[(heightsASize - 1) / 2] + heightsA[heightsASize / 2]) / 2.0;
    } else {
        medianHeightA = heightsA[heightsASize / 2];
    }

    if (heightsBSize % 2 == 0) {
        medianHeightB = (heightsB[(heightsBSize - 1) / 2] + heightsB[heightsBSize / 2]) / 2.0;
    } else {
        medianHeightB = heightsB[heightsBSize / 2];
    }



    if (medianHeightA > medianHeightB) {
        cout << "A " << heightsA[heightsASize - 1];
    } else if (medianHeightA < medianHeightB) {
        cout << "B " << heightsB[heightsBSize - 1];
    } else {
        if (heightsA[heightsASize - 1] > heightsB[heightsBSize - 1]) {
            cout << "A B " << heightsA[heightsASize - 1];
        } else {
            cout << "A B " << heightsB[heightsBSize - 1];
        }
        
    }



    return 0;
}


//1 2 3 5 8