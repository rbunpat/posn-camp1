#include <bits/stdc++.h>

using namespace std;

int main() {

    string gender;
    double weight, height, bmr;
    int age;

    cin >> gender >> weight >> height >> age;

    if (gender == "MALE") {
        bmr = 66 + (13.7 * weight) + (5 * height) - (6.8 * age);
        cout << bmr;
    } else if (gender == "FEMALE") {
        bmr = 665 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
        cout << bmr;
    } else {
        cout << "MALE OR FEMALE";
    }

    return 0;
}