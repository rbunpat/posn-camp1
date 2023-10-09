#include <bits/stdc++.h>

using namespace std;

int main() {
    string sentence;

    char checkLetter;

    int letterCount = 0;

    getline(cin, sentence);
    cin >> checkLetter;

    for (int i = 0; i < sentence.length(); i++) {
        if (char(sentence[i]) == checkLetter) {
            letterCount ++ ;
        }
    }

    return 0;
}