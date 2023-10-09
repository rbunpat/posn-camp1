#include <bits/stdc++.h>

using namespace std;

int main() {
    int maxHeight, currentHeight, count, countSave;

    double averageHeight;

    averageHeight = 0;

    cin >> count;

    countSave = count;

    while (count--) {
        cin >> currentHeight;

        if (currentHeight > maxHeight) {
            maxHeight = currentHeight;
        }
        averageHeight += currentHeight;

    }

    averageHeight = averageHeight / countSave;

    // cout << fixed << setprecision(3) << averageHeight << endl;
    cout << averageHeight << endl;
    cout << maxHeight;

    return 0;
}