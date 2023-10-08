#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberCount, i;
    float numberAverage, numberInput, numberSum;

    cin >> numberCount;

    for (i = 1; i <= numberCount; i++) {
        cin >> numberInput;
        numberSum += numberInput;
    }

    numberAverage = numberSum / numberCount;

    cout << numberAverage << endl;



    

    return 0;
}