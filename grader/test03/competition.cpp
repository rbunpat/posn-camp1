#include <bits/stdc++.h>

using namespace std;

int main() {
    int compCount = 0, lowerCount = 0;
    cin >> compCount;

    int compScore[compCount];

    for (int i = 0; i < compCount; i++) {
        cin >> compScore[i];
    }

    for (int i = 0; i < compCount; i++){
        for (int j = 0; j < compCount; j++) {
            if (compScore[i] < compScore[j]) {
                lowerCount ++ ;
            }
        }
        cout << lowerCount << " ";
        lowerCount = 0;
    }



    return 0;
}