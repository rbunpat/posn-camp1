#include <bits/stdc++.h>

using namespace std;

int main() {
    char wut;

    cin >> wut;

    wut = toupper(wut);

    switch (wut)
    {
    case 'D':
        int num;
        cin >> num;
        if (num % 2 == 0) {
            cout << "Even Number.";
        } else {
            cout << "Odd Number.";
        }
        break;

    case 'A' :
        int num1, num2;
        cin >> num1 >> num2;
        cout << num1 + num2;
        break;

    case 'S' :
        int bruh1, bruh2;
        cin >> bruh1 >> bruh2;
        cout << bruh1 - bruh2;
        break;
    
    default:
        cout << "Error.";
        break;
    }

    return 0;
}