#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int  tempMax = INT_MIN, tempMin = INT_MAX;
    float tempAvg, tempCount, tempSum;
    cin >> tempCount;
    int temp[int(tempCount)];

    for (int i = 0; i < tempCount; i++) {
        cin >> temp[i];
        tempSum += temp[i];
        if (temp[i] > tempMax) {
            tempMax = temp[i];
        }
        if (temp[i] < tempMin) {
            tempMin = temp[i];
        }
    }
    tempAvg = tempSum / tempCount;
    
    cout << "Max=" << tempMax << endl;
    cout << "Min=" << tempMin << endl;
    cout << fixed << setprecision(2) << tempAvg << endl;


    return 0;
}