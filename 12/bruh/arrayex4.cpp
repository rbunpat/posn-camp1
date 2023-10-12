#include <bits/stdc++.h>

using namespace std;

int main() {
    int ar1[10], ar2[10];

    for (int i = 0; i < 10; i++) {
        cin >> ar1[i];
    }

    for (int i = 0; i < 10; i++) {
        ar1[i] = ar2[i];
    }

    cout << "A2 =";

    for (int i = 0; i < 10; i++) {
        cout << " " << ar2[i];
    }





    return 0;
}