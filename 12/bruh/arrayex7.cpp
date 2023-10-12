#include <bits/stdc++.h>

using namespace std;

int main() {
    string province = "suratthani";

    char alphabets[26];

    for (int i = 0; i < 26; i++) {
        cin >> alphabets[i];
    }


    // char alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
    //                       'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
    //                       's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


    cout << "Animal: " << alphabets[0] << " Ant" << endl;
    cout << "Object: " << alphabets[1] << " Ball" << endl;
    cout << "Nickname: " << alphabets[5] << " First" << endl;
    cout << "Day: " << alphabets[5] << " Friday" << endl;
    cout << "Province: " << alphabets[18] << " Suratthani " << province.length() << endl;

    return 0;
}