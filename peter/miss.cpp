#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;

    int arraySize = sizeof(arr) / sizeof(arr[0]);

    for (int step = 0; step < arraySize; step++) {
        cin >> arr[step];
    }

    for (int step = 0; step < arraySize; step++) {
        if (arr[step] % 2 == 0) {
            sum1 += arr[step];
        } else {
            sum2 += arr[step];
        }
    }

    for (int i = 0; i < arraySize; i++) {
        if (arr[i] > 0) {
            sum1 += arr[i];
        }
        sum += arr[i];
        if (arr[i] % 2 == 0) {
            sum2 += arr[i];
        }
    }

    cout << sum << endl;
    cout << sum1 << endl;
    cout << sum2 << endl;

    


    return 0;
}