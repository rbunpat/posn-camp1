#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double requiredAmountPerPerson, ballRadius, ballVolume;
    int maxPeopleCount;
    const double pi = 3.14;

    cin >> ballRadius >> requiredAmountPerPerson;

    ballVolume = (4 * pi * pow(ballRadius, 3)) / (3 * requiredAmountPerPerson);

    // maxPeopleCount = ballVolume / requiredAmountPerPerson;

    cout << int(ballVolume);

    return 0;
}
