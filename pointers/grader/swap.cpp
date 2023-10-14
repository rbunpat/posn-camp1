#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    cout << num1 << " " << num2 << endl;

    swap(&num1, &num2);

    cout << num1 << " " << num2 << endl;



    return 0;
}