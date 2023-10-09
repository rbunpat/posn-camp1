#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, oddCount;
    cin >> n;

    i = 1;
    oddCount = 0;

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            oddCount++;
        }
        i++;
        
    }

    cout << oddCount << endl;
    

    return 0;
}