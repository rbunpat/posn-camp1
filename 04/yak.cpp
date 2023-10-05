#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int bigX, bigY, smallX, smallY, distance;

    cin >> bigX >> bigY;
    cin >> smallX >> smallY;

    distance = abs(bigX - smallX) + abs(bigY - smallY);
    cout << distance;

    return 0;
}
