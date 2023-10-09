#include <bits/stdc++.h>

using namespace std;

int main() {
    int num, num2, i, factorial;

    cin >> num;

    factorial = num;

    num2 = num - 1;


    while (num2 != 0) {
        factorial *= num2;
        num2--;
    }

    cout << factorial << endl;
    

    return 0;
}