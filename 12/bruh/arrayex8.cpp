#include <bits/stdc++.h>

using namespace std;

int main() {
    string text1, text2;

    cin >> text1 >> text2;

    string txt1[text1.length()], txt2[text2.length()];
    string joined[text1.length() + text2.length()];

    for (int i = 0; i < text1.length(); i++) {
        txt1[i] = text1[i];
    }
    for (int i = 0; i < text2.length(); i++) {
        txt2[i] = text2[i];
    }
    for (int i = 0; i < text1.length(); i++) {
        joined[i] = txt1[i];
    }
    for (int i = 0; i < text2.length(); i++) {
        joined[i + text1.length()] = txt2[i];
    }
     
    cout << "Joined: ";
    for (int i = 0; i < text1.length() + text2.length(); i++) {
        cout << joined[i];
    }


    return 0;
}