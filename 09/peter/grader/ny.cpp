#include <bits/stdc++.h>

using namespace std;

int main() {
    char input;
    cin >> input;

    input = toupper(input);

    if (input == 'Y') {
        cout << "Save" << endl;
    } else if (input == 'N') {
        cout << "Exit" << endl;
    } else {
        cout << "Error" << endl;
    }
    

    return 0;
}