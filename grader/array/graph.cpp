#include <bits/stdc++.h>

using namespace std;

int main() {
    int arSize;

    cin >> arSize;

    int ar[arSize];

    for (int i = 0; i < arSize; i++) {
        cin >> ar[i];
    }

    for (int j = 0; j < arSize; j++) {
        //print out graphh using *
        for (int k = 0; k < ar[j]; k++) {
            cout << "*";
        }
        cout << endl;
        
    }

    return 0;
}