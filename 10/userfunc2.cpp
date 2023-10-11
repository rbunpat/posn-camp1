#include <bits/stdc++.h>

using namespace std;

int Fac(float);

int main() {
    float Num;
    cin >> Num;

    cout << Fac(Num);

    return 0;
}

int Fac(float bruh) {
    int fac = 1;
    bruh = int(bruh);
    for (int i = 1; i <= bruh; i++) {
        fac *= i;
    }

    return fac;
}