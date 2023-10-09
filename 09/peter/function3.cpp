#include <bits/stdc++.h>

using namespace std;

int main()
{
    int startNum, endNum, interval;

    cin >> startNum >> endNum >> interval;

    if (startNum == endNum)
    {
        cout << "N/A";
        return 0;
    }
    else if (startNum < endNum)
    {
        while (startNum <= endNum)
        {
            cout << startNum << " ";
            startNum += interval;
        }
    }
    else
    {
        while (startNum >= endNum)
        {
            cout << startNum << " ";
            startNum -= interval;
        }
    }

    return 0;
}