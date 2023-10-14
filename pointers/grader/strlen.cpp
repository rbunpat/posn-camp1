#include <bits/stdc++.h>
using namespace std;
void len(string x)
{
    int i = 0;
    while (x[i] != '\0')
    {
        i++;
    }
    cout << i;
}
int main()
{
    string *a, x;
    getline(cin, x);
    a = &x;
    len(*a);
}