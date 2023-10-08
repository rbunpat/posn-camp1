#include <bits/stdc++.h>

using namespace std;

int main() {
    int doraX, doraY, objectX, objectY;
    double distance1, distance2, slope;

    cin >> doraX >> doraY;
    cin >> objectX >> objectY;

    distance1 = sqrt( pow((objectX - doraX), 2) + pow((objectY - doraY), 2));

    cout << fixed << setprecision(4) << distance1 << endl;

    slope = (objectY - doraY) / (objectX - doraX);

    // distance2 = distance1 + (distance1 * slope);

    distance2 = abs(objectX - doraX) + abs(objectY - doraY);

    cout << distance2;

    return 0;
}