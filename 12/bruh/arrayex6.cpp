#include <bits/stdc++.h>

using namespace std;

int main() {
    int grades[5], passCount = 0;
    float standardGrade;
    cin >> standardGrade;

    for (int i = 0; i < 5; i++) {
        cin >> grades[i];
    }

    for (int i = 0; i < 5; i++) {
        if (grades[i] >= standardGrade) {
            cout << grades[i] << endl;
            passCount++;
        }
    }

    if (passCount == 0) {
        cout << "none";
    }


    return 0;
}