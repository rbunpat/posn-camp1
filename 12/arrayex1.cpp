#include <bits/stdc++.h>

using namespace std;

int main() {
    float height[5] = {175.5, 153.0, 167.25, 160.70, 180.90};
    float sum;

    cout << height[0] << endl;

    cout << height[4] << endl;

    cout << height[1] + height[3] << endl;
    
    for (int i = 0; i < 5; i++) {
        sum += height[i];
    }
    cout << sum << endl;

    cout << sum / 5 << endl;






    return 0;
}