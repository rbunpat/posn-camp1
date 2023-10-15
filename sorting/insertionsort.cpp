#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberCount, arraySize;
    cin >> numberCount;

    int numberArray[numberCount];

    arraySize = sizeof(numberArray) / sizeof(numberArray[0]);

    for (int i = 0; i < arraySize; i++) {
        cin >> numberArray[i];
    }

    for (int i = 1; i < arraySize; i++) {
        int key = numberArray[i];
        int j = i - 1;
        while (key < numberArray[j] && j >= 0) {
            numberArray[j + 1] = numberArray[j];
            j = j - 1;
        }

        numberArray[j + 1] = key;
    }

    for (auto bruh: numberArray) {
        cout << bruh << " ";
    }

    return 0;
}