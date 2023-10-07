#include <bits/stdc++.h>

using namespace std;

int main() {
    int satisfaction;

    cin >> satisfaction;

    switch (satisfaction)
    {
    case 1:
        cout << "No opinion";
        break;

    case 2:
        cout << "Poor";
        break;

    case 3:
        cout << "Fair";
        break;
    
    case 4:
        cout << "Good";
        break;
    case 5:
        cout << "Excellent";
        break;

    default:
        cout << "Input Error";
        break;
    }



    return 0;
}