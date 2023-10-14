#include <bits/stdc++.h>

using namespace std;

int main() {
    string originalString;
    getline(cin, originalString);

    string newString = "";

    // search for unique charaftsrs and pu it in newstring

    for (int i = 0; i < originalString.length(); i++) {
        bool isUnique = true;
        for (int j = 0; j < newString.length(); j++) {
            if (originalString[i] == newString[j] && originalString[i] != ' ') {
                isUnique = false;
                break;
            }
        }
        if (isUnique && originalString[i] != ' ') {
            newString += originalString[i];
        }
    }

    // cout << newString << endl;

    for (int k = 0; k < newString.length(); k++) {
        int count = 0;
        for (int l = 0; l < originalString.length(); l++) {
            if (newString[k] == originalString[l]) {
                count++;
            }
        }
        cout << newString[k] << " " << count << endl;
    }


    return 0;
}