#include <bits/stdc++.h>

using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    int charCount = 0;

    for (int i = 0; i < sentence.length(); i++) {
        if (isalpha(sentence[i])) {
            charCount++;
        }
        // } else if (isdigit(sentence[i])){
        //     charCount ++;
        // }
    }

    cout << charCount << endl;




    return 0;
}