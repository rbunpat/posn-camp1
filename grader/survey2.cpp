#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, e, totalScore;

    cin >> a >> b >> c >> d >> e;

    totalScore = a + b + c + d + e;

    if (totalScore < 5) {
        cout << "No opinion";
    } else if (totalScore < 10) {
        cout << "Poor";
    } else if (totalScore < 15) {
        cout << "Fair";
    } else if (totalScore < 20) {
        cout << "Good";
    } else if (totalScore < 25) {
        cout << "Excellent";
    } else {
        cout << "Input Error";
    }


    return 0;
}