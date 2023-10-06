#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double weight, height, bmi;
    string bodyStatus;

    cin >> weight >> height;

    height = height / 100;

    bmi = weight / pow(height, 2);

    if (bmi < 18.6) {
        bodyStatus = "UNDERWEIGHT";
    } else if (bmi < 25) {
        bodyStatus = "NORMAL";
    } else if (bmi < 30) {
        bodyStatus = "OVERWEIGHT";
    } else if (bmi < 35) {
        bodyStatus = "OBESE";
    } else {
        bodyStatus = "EXTREMELY OBESE";
    }

    cout << bmi << " " << bodyStatus;
    return 0;
}
