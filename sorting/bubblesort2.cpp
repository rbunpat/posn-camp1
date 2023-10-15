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

    //bubble sort
    bool swapped;

    for (int b = 0; b < arraySize - 1; b++) {
        swapped = false;

        for (int j = 0; j < arraySize - b - 1; j++) {
            if (numberArray[j] < numberArray[j + 1]) {
                swap(numberArray[j], numberArray[j + 1]);
                swapped = true;
            }
        }

        cout << b << "  ";
        for (auto bruh: numberArray) {
            
            cout << bruh << " ";
        }

        cout << endl;

        if (swapped == false) {
            break;
        }

    }

    for (auto m : numberArray) {
        cout << m << " ";
    }


    


    return 0;
}