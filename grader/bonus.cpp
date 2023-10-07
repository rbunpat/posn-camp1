#include <bits/stdc++.h>

using namespace std;

int main() {
    char empType;
    int salary, bonus, workAge;

    cin >> empType >> workAge >> salary;

    empType = toupper(empType);

    if (empType == 'M') {
        bonus = 1500;
        if (workAge < 5) {
            bonus += salary * 0.06;
        } else if (workAge < 10) {
            bonus += salary * 0.08;
        } else {
            bonus += salary * 0.1;
        }
    } else if (empType == 'B') {
        bonus = 1000;
        if (workAge < 5) {
            bonus += salary * 0.05;
        } else if (workAge < 10) {
            bonus += salary * 0.06;
        } else {
            bonus += salary * 0.07;
        }
    } else if (empType == 'G') {
        bonus = 500;
        if (workAge < 5) {
            bonus += salary * 0.04;
        } else if (workAge < 10) {
            bonus += salary * 0.05;
        } else {
            bonus += salary * 0.06;
        }
    } else {
        cout << "Input Error";
        return 0;
    }

    cout << bonus;


    return 0;
}