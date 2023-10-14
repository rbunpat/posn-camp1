#include <bits/stdc++.h>

using namespace std;

int main() {
    int studentCount;
    cin >> studentCount;

    struct students {
        string name;
        int score1;
        int score2;
        int score3;
    } students[studentCount];

    for (int i = 0; i < studentCount; i++) {
        cin >> students[i].name >> students[i].score1 >> students[i].score2 >> students[i].score3;
    }

    for (int i = 0; i < studentCount; i++) {
        cout << students[i].name << " ";
        int totalScore = students[i].score1 + students[i].score2 + students[i].score3;
        cout << totalScore << " ";
        if (totalScore >= 80) {
            cout << "A" << endl;
        } else if (totalScore >= 75) {
            cout << "B+" << endl;
        } else if (totalScore >= 70) {
            cout << "B" << endl;
        } else if (totalScore >= 65) {
            cout << "C+" << endl;
        } else if (totalScore >= 60) {
            cout << "C" << endl;
        } else if (totalScore >= 55) {
            cout << "D+" << endl;
        } else if (totalScore >= 50) {
            cout << "D" << endl;
        } else {
            cout << "F" << endl;
        }
    }



    return 0;
}