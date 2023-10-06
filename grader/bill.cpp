#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int kwCount;
    double amount;

    cin >> kwCount;

    if (kwCount < 50) {
        cout << "free of charge";
    } else if (kwCount < 101) {
        cout << fixed << setprecision(2) << kwCount * 0.75;
    } else if (kwCount < 201) {
        cout << fixed << setprecision(2) << kwCount * 1;
    } else {
        cout << fixed << setprecision(1) << kwCount * 1.20;
    }

    // if (kwCount < 51) {
    //     amount = 0;
    // } else if (kwCount < 151) {
    //     amount = (kwCount - 50) * 0.75;
    // } else if (kwCount < 250) {
    //     amount = (100 * 0.75) + ((kwCount - 150) * 1);
    // } else {
    //     amount = (100 * 0.75) + (100 * 1) + ((kwCount - 250) * 1.20);
    // }

    return 0;
}
