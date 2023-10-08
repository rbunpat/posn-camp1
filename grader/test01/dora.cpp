#include <bits/stdc++.h>

using namespace std;

int main() {
    int doraX, doraY, objectX, objectY;
    double distance1, distance2, slope;

    bool checkdist;

    float dist1, dist2;

    cin >> doraX >> doraY;
    cin >> objectX >> objectY;

    distance1 = sqrt( pow((objectX - doraX), 2) + pow((objectY - doraY), 2));

    cout << fixed << setprecision(4) << distance1 << endl;

    slope = (objectY - doraY) / (objectX - doraX);

    // distance2 = distance1 + (distance1 * slope);

    distance2 = abs(objectX - doraX) + abs(objectY - doraY);

    dist1 = sqrt( pow((objectX - doraX), 2) + pow((objectY - doraY), 2));
    if (distance1 == dist1) {
        cout << "bruh";
    } else {
        cout << "notbruh";
    }

    cout << distance2;

    return 0;
}