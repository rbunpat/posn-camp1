#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, numberCount;

    double numberAverage, numberSum;

    numberCount = -1;
    numberSum = 0;
    
    do {
        cin >> n;
        numberCount++;
        numberSum += n;
        
    } while (n != 0);

    numberAverage = numberSum / numberCount;

    cout << numberCount << endl;
    cout << numberSum << endl;

    cout << numberAverage << endl;

    return 0;
}