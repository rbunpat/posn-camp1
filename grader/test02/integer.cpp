#include <bits/stdc++.h>

using namespace std;

int main() {
    int numCount = 0, bruhCount = 0;
    cin >> numCount;

    double bruh;

    for (int i = 0; i < numCount; i++) {
        cin >> bruh;
        if (bruh == floor(bruh)) {
            bruhCount++;
        }
        bruh = 0;
    }

    cout << bruhCount;

    return 0;
}