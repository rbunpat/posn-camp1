#include <bits/stdc++.h>

using namespace std;

int main() {
    int travelHours, travelMinutes, distance;
    cin >> travelHours;

    distance = 40;

    travelMinutes = travelHours * 60;

    while (travelHours--) {
        cout << distance << endl;
        distance += 40;
    }

    return 0;
}