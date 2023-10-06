#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double discountRate, beforeDiscount, afterDiscount, discountAmount;

    cin >> beforeDiscount;

    if (beforeDiscount > 4000) {
        discountRate = 10;

    } else if (beforeDiscount > 2000) {
        discountRate = 8;
    } else if (beforeDiscount > 999) {
        discountRate = 5;
    } else {
        discountRate = 0;
    }

    if (discountRate == 0) {
        cout << "no discount" << endl;
    } else {
        discountAmount = (discountRate * beforeDiscount) / 100;
        afterDiscount = beforeDiscount - discountAmount;
        cout << fixed << setprecision(2) << discountAmount << endl;
        cout << fixed << setprecision(2) << afterDiscount;
    }
    return 0; 
}
