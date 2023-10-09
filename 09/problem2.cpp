#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, oddCount, oddSum;
    cin >> n;

    i = 1;
    oddCount = 0;
    oddSum = 0;

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            oddSum += i;
            oddCount++;
        }
        i++;
        
    }

    cout << oddCount << endl;
    cout << oddSum << endl;
    

    return 0;
}