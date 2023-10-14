#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int Arr[5] = {5, 1, 8, -7, 6};

    int N = sizeof(Arr) / sizeof(Arr[2]);

    sort(Arr, Arr + N);

    for(auto PokPak : Arr) {
        cout << PokPak << " ";
    }
    return 0;
}