#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double hourCount, payRate, payAmount, taxRate, afterTax, taxAmount;

    cin >> hourCount >> payRate;

    payAmount = payRate * hourCount;

    if (payAmount > 1000) {
        taxRate = 5;
    } else {
        taxRate = 3;
    }

    taxAmount = (payAmount * taxRate) / 100;
    afterTax = payAmount - taxAmount;

    cout << fixed << setprecision(2) << taxAmount << endl;
    cout << fixed << setprecision(2) << afterTax;
    
    return 0; 
}
