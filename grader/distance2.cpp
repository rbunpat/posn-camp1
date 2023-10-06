#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double distanceA, distanceB, houseToSchool, houseToTempleToSchool, distanceDifference;

    cin >> distanceA >> distanceB;

    houseToTempleToSchool = distanceA + distanceB;

    houseToSchool = sqrt( pow(distanceA, 2) + pow(distanceB, 2) );

    distanceDifference = houseToTempleToSchool - houseToSchool;

    cout << distanceDifference << endl ;
    return 0;
}
