#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberCount, i, currentMin, currentMax, numberInput;

    cin >> numberCount;

    currentMin = INT_MAX;
    currentMax = INT_MIN;

    for (i = 1; i <= numberCount; i++) {
        cin >> numberInput;
        if (numberInput < currentMin) {
            currentMin = numberInput;
        } else if (numberInput > currentMax) {
            currentMax = numberInput;
        }
    }

    cout << currentMin << endl;
    cout << currentMax << endl;





    return 0;
}