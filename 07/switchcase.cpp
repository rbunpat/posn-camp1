#include <bits/stdc++.h>

using namespace std;

int main() {
    int acy;
    cin >> acy;
    switch (acy)
    {
    case 1:
        cout << "Freshman";
        break;
    case 2:
        cout << "Sophomore";
        break;
    case 3:
        cout << "Junior";
        break;
    case 4:
        cout << "Senior";
        break;
    
    default:
        cout << "Super";
        break;
    }

    return 0;
}