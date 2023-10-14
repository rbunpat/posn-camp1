#include <bits/stdc++.h>

using namespace std;

int main() {
    string food = "pizza";

    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";

    // food = "rice";
    cout << &food << "\n";
    cout << &meal << "\n";
    return 0;
}