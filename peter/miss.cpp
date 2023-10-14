#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;

    for (int step = 0; step < sizeof(arr); step++) {
        cin >> arr[step];
    }

    for (int step = 0; step < sizeof(arr); step++) {
        if (arr[step] % 2 == 0) {
            sum1 += arr[step];
        } else {
            sum2 += arr[step];
        }
    }

    for (int i = 0; i < sizeof(arr); i++) {
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