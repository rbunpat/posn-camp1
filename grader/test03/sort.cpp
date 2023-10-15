#include <bits/stdc++.h>

using namespace std;

int main() {
    int heightCount;
    cin >> heightCount;

    float height[heightCount];

    for (int i = 0; i < heightCount; i++)
    {
        cin >> height[i];
    }





    // cout << "0 165.30 162.00 170.50" << endl;
    // cout << "1 165.30 165.30 162.00" << endl;
    // cout << "170.50 165.30 162.00";

    

    
    for (int i = 0; i < heightCount; i++) {
        // float key = height[i];
        for (int j = 0; j < heightCount; j++) {
            if (height[j] < height[j + 1]) {
                swap(height[j], height[j + 1]);
            }
        }

        if (i < heightCount - 1) {
            cout << i << "  ";
        }
        

        for (auto bruh: height) {
            cout << fixed << setprecision(2) << bruh << "  ";
        }
        cout << endl;
    }






    

    return 0;
}