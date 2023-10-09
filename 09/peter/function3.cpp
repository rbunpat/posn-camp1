#include <bits/stdc++.h>

using namespace std;

int main() {
    int startNum, endNum, interval;

    cin >> startNum >> endNum >> interval;

    if (startNum == endNum) {
        cout << "N/A";
        return 0;
    }

    while (startNum <= endNum)
    {
        cout << startNum << " ";
        startNum += interval;
    }

    while (startNum >= endNum)
    {
        cout << startNum << " ";
        startNum -= interval;
    }


    


    return 0;
}