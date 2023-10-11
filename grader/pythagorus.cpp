#include <bits/stdc++.h>

using namespace std;

bool checkRightTriangle(int, int, int);

int main() {
    int side1, side2, side3;

    cin >> side1 >> side2 >> side3;

    checkRightTriangle(side1, side2, side3) ? cout << "Correct" : cout << "Wrong";

    return 0;
}

bool checkRightTriangle(int side1, int side2, int side3) {
    bool isRightTriangle;

    isRightTriangle = false;

    if (pow(side1, 2) == pow(side2, 2) + pow(side3, 2))
        isRightTriangle = true;
    else if (pow(side2, 2) == pow(side1, 2) + pow(side3, 2))
        isRightTriangle = true;
    else if (pow(side3, 2) == pow(side1, 2) + pow(side2, 2))
        isRightTriangle = true;
    else
        isRightTriangle = false;

    return isRightTriangle;
}