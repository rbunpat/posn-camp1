#include <bits/stdc++.h>

using namespace std;

int strlength(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++) {
        n++;
    }
    return n;
}

int main() {
    
    char *s = "hello";
    cout << strlength(s) << endl;

    return 0;
}