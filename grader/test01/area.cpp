#include <bits/stdc++.h>

using namespace std;

int main() {
    int calculateOption;

    string calculateType;

    float answer, num1, num2;

    cin >> calculateOption >> num1 >> num2;

    switch (calculateOption)
    {
    case 1:
        answer = 0.5 * num1 * num2;
        calculateType = "triangle";
        break;
    case 2:
        answer = num1 * num2;
        calculateType = "square";
        break;
    case 3:
        // answer = (22/7) * pow(num1, 2) * num2;
        answer = (22 * pow(num1, 2) * num2) / 7;
        calculateType = "cylindrical volume";
        break;
    case 4:
        // answer = (1/3) * (22/7) * pow(num1, 2) * num2;
        answer = (1 * 22 * pow(num1, 2) * num2) / (3 * 7);
        calculateType = "cone volume";
        break;
    default:
        break;
    }

    cout << calculateType << " " << answer;

    return 0;
}