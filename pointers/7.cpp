#include <bits/stdc++.h>

using namespace std;

void strcopy(char *s, char *t) {
    int i = 0;
    while ((s[i] = t[i]) != '\0') {
        i++;
    }
    return;
}

void strcopy2(char *s, char *t) {
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
    return;
}

void strcopy3(char *s, char *t) {
    while ((*s++ = *t++) != '\0') {
        ;
    }
    return;
}


int main() {
    

    return 0;
}