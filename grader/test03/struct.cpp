#include <bits/stdc++.h>

using namespace std;

int main() {
    float totalScore, averageScore, passCount;
    int studentCount = 0;
    totalScore = averageScore = passCount = 0;
    cin >> studentCount;

    struct students
    {
        string studentId;
        int score;
        bool pass;

    } students[studentCount];

    for (int i = 0; i < studentCount; i++){
        cin >> students[i].studentId;
        cin >> students[i].score;
        totalScore += students[i].score;
        students[i].pass = false;
    }

    averageScore = totalScore / studentCount;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].score >= averageScore) {
            students[i].pass = true;
            passCount ++ ;
        }
    }
    
    cout << passCount << endl;
    for (int i = 0; i < studentCount; i++) {
        if (students[i].pass) {
            cout << students[i].studentId << endl;
        }
    }
    

    return 0;
}