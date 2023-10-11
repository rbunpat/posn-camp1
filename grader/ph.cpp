#include <bits/stdc++.h>

using namespace std;

int main() {

    string strongAcid[6] = {"HCl", "HBr", "HI", "HNO3", "H2SO4", "HClO4"};

    string strongBase[8] = {"LiOH", "NaOH", "KOH", "RbOH", "CsOH", "Ca(OH)2", "Sr(OH)2", "Ba(OH)2"};

    string chemType;
    float ph;

    cin >> chemType >> ph;

    if (ph > 7) {
        cout << "Base" << endl;
        for (int i = 0; i <= 8; i++) {
            if (chemType == strongBase[i]) {
                cout << "Strong";
                return 0;
            }
        }
        cout << "Weak";
    } else if (ph < 7) {
        cout << "Acid" << endl;
        for (int i = 0; i <= 6; i++) {
            if (chemType == strongAcid[i]) {
                cout << "Strong";
                return 0;
            }
        }
        cout << "Weak";
    } else {
        cout << "Natural" << endl;
        cout << "None";
    }

    

    

    return 0;
}