#include <bits/stdc++.h>

using namespace std;

int main() {
    string bruh, reversedBruh;
    int alphaCount = 0, numCount = 0, specialCharCount = 0;
    getline(cin, bruh);

    int reverseCount = bruh.length();

    for (int i = 0; i <= bruh.length(); i++) {
        // if(int(bruh[i]) <= 90 && int(bruh[i]) >= 65) {
        //     alphaCount ++ ;
        // }
        if(isalpha(bruh[i])) {
            alphaCount ++ ;
        }
    }

    for (int j = 0; j <= bruh.length(); j++) {
        if (int(bruh[j]) <= 57 && int(bruh[j]) >= 48) {
            numCount ++ ;
        }
    }

    for (int k = 0; k <= bruh.length(); k++) {
        if (int(bruh[k]) <= 47 && int(bruh[k]) >= 32 || int(bruh[k] > 57) && int(bruh[k] < 65) || int(bruh[k] > 90) && int(bruh[k] < 97)) {
            specialCharCount ++ ;
        }
    }

    cout << alphaCount << endl;
    cout << numCount << endl;
    cout << specialCharCount << endl;

    for (int q = reverseCount - 1; q >= 0; q--) {
        if (isalpha(int(bruh[q]))) {
            cout << char (toupper(bruh[q]));
        }
    }

    // for(int w = 0; w <= bruh.length(); w++) {
    //     bruh[w] = toupper(bruh[w]);
    // }


    // cout << reversedBruh;
    // cout << bruh;

    return 0;
}