#include <bits/stdc++.h>

using namespace std;

int main() {
    int year;
    cin >> year;

    if (year == 1) {
        cout << "Freshman";
    } else if (year == 2) {
        cout << "Sophomore";
    } else if (year == 3) {
        cout << "Junior";
    } else if (year == 4){
        cout << "Senior";
    } else {
        cout << "Super";
    }

    return 0;
}