#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i = 0;
    cin >> n;
    char str[n], data;

    do
    {
        cin >> data;
        if (isalpha(data)) {
            str[i] = data;
            i++;
        }
    } while (i < n);

    sort(str, str + n);

    for (int i = 0; i < n; i++) {
        cout << str[i] << " ";
    }

    

    // for (int i = 0; i < n; i++) {
    //     cin >> str[i];
    // }

    // for (int i = 0; i < n; i++) {
    //     if (isalpha(str[i])) {
    //         << str[i];
    //         //add to an array
            
    //     }
    // }

    return 0;
}