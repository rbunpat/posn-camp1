#include <bits/stdc++.h>

using namespace std;

int main() {

    int x[3];
    int y[3];
    int sum = 0;

    for(int i = 0; i < 3; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> y[i];
    }

    cout << "A intersection B = ";

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (x[i] == y[j]) {
                cout << x[i] << ",";
                sum += x[i];
            }
        }
    }
    cout << endl;
    cout << "Total = " << sum;



    
    return 0;
}