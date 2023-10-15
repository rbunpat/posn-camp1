#include <bits/stdc++.h>

using namespace std;

int main() {

    int numberCount, arraySize;
    // cin >> numberCount;
    numberCount = 8;


    int numberArray[numberCount] = {8, 1, 6, 14, -7, 9, 4, -2};

    arraySize = sizeof(numberArray) / sizeof(numberArray[0]);

    // for (int i = 0; i < arraySize; i++) {
    //     cin >> numberArray[i];
    // }

    for (int i = 0; i < arraySize - 1; i++ ){
        int minIndex = i;// stores the current minimum value

        for (int j = i + 1; j < arraySize; j++) {
            if (numberArray[j] < numberArray[minIndex]) {
                minIndex = j;
            }
        }

        swap(numberArray[minIndex], numberArray[i]);

        cout << i << endl;
        for (auto wut: numberArray) {
            cout << wut << " ";
        }
        cout << endl;


    }
    
    for (auto bruh: numberArray) {
        cout << bruh << " ";
    }

    return 0;
}