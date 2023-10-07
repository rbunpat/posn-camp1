#include <bits/stdc++.h>

using namespace std;

int main() {
    char char1;
    cin >> char1;

    if (char1 == 'a' || char1 == 'b' || char1 == 'x') {
        cout << "Hanaga";
    } else if (char1 == 'u' || char1 == 'd' || char1 == 'p') {
        cout << "Bingo";
    } else if (char1 == 'g') {
        cout << "Google";
    } else {
        cout << "Yappadappadoooo";
    }

    return 0;
}