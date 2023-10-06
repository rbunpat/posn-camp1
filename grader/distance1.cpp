#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int x1, y1, x2, y2;
    float distance;

    cin >> x1 >> y1 >> x2 >> y2 ;

    distance = sqrt( pow((x2 - x1), 2) + pow((y2 - y1), 2) );

    cout << distance;
    return 0;
}
