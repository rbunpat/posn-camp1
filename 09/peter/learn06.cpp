#include <bits/stdc++.h>

using namespace std;

int main() {

    double average = 0, number = 0, numberCount = 0, numberCountSave = 0, maxNumber = INT_MIN, minNumber = INT_MAX;

    numberCount = 5;

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


    cout << "Max " << maxNumber << endl;
    cout << "Min " << minNumber << endl;
    cout << "Sum " << average << endl;
    average = average / numberCount;
    cout << "Average " << average << endl;

    return 0;
}