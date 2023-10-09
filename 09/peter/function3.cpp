#include <bits/stdc++.h>

using namespace std;

int main() {
    int startNum, endNum, interval;

    cin >> startNum >> endNum >> interval;

    while (startNum <= endNum)
    {
        cout << startNum << " ";
        startNum += interval;
    }
    


    return 0;
}