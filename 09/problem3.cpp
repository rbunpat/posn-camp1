#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, numberCount;

    numberCount = -1;
    
    do {
        cin >> n;
        numberCount++;
    } while (n != 0);

    cout << numberCount << endl;

    return 0;
}