#include <bits/stdc++.h>

using namespace std;

int main() {

    double average = 0, number = 0, numberCount = 0, numberCountSave = 0, maxNumber = INT_MIN, minNumber = INT_MAX;

    cin >> numberCount;

    numberCountSave = numberCount;


    while (numberCountSave--) {
        cin >> number;
        if (number > maxNumber) {
            maxNumber = number;
        }
        if (number < minNumber) {
            minNumber = number;
        }
        average += number;
    }

    average = average / numberCount;

    cout << "Max is = " << maxNumber << endl;
    cout << "Min is = " << minNumber << endl;
    cout << "Average = " << average << endl;

    return 0;
}