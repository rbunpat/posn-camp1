#include <bits/stdc++.h>

using namespace std;

void CkNum(int);

int main() {
    int Num;
    cin >> Num;
    CkNum(Num);

    return 0;
}

void CkNum(int num) {
    if (num > 0) {
        cout << "Positive";
    } else if (num < 0) {
        cout << "Negative";
    } else {
        cout << "Zero";
    }
    return;
}