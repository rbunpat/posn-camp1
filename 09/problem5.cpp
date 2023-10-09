#include <bits/stdc++.h>

using namespace std;

int main() {
    int score1, score2, totalScore;

    score1 = INT_MAX;
    score2 = INT_MAX;

    while (score1 > 70 || score2 > 30) {
        cin >> score1 >> score2;
    }

    totalScore = score1 + score2;

    if (totalScore >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }



    return 0;
}