#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double beforeVat, afterVat, vatAmount;
    int vatRate;

    cin >> beforeVat;

    if (beforeVat >= 5000) {
        vatRate = 3;
    } else {
        vatRate = 7;
    }

    vatAmount = (beforeVat * vatRate) / 100;

    afterVat = beforeVat - vatAmount;

    cout << fixed << setprecision(2) << vatAmount << endl;
    cout << fixed << setprecision(2) << afterVat << endl;

    
    return 0;
}
