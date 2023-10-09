#include <bits/stdc++.h>

using namespace std;

int main() {
    string password;
    int retryCount = 0;

    string correctPassword = "ocoM2519";

    while (retryCount < 3) {
        cin >> password;

        if (password == correctPassword) {
            cout << "Passed";
            return 0;
        } else {
            if (retryCount == 2) {
                break;
            }
            cout << "Try Again"<< endl;
            retryCount++;
        }
    }

    cout << "Contact Bank!";


    return 0;
}