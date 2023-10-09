#include <bits/stdc++.h>

using namespace std;

int main() {
    double radius, height;

    cin >> radius >> height;

    if (radius < 10 || radius > 100 || height < 20 || height > 150) {
        cout << "STOP" << endl;
        return 0;
    }


    cout << fixed << setprecision(2)
    << (2 * 22 * radius) / 7 << "  " 
    << (22 * pow(radius, 2)) / 7 << "  " 
    << (22 * pow(radius, 2) * height) / 7 << "  "
    << (((2 * 22 * radius * height) / 7) + (2 * 22 * pow(radius, 2)) / 7) << "  "
    << (22 * pow(radius, 2) * height) / (7*3) << "  "
    << ((22 * radius * height)/7) + ((22 * pow(radius, 2))/7) << "  "
    // << ((22.0 * radius) / 7.0) * (radius + sqrt(pow(height, 2) + pow(radius, 2)))<< "  "
    << (4 * 22 * pow(radius, 3)) / (3 * 7) << "  "
    << (4 * 22 * pow(radius, 2)) / 7 << "  ";

    return 0;
}