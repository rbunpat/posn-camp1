#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector <char> ch;
    vector <char> :: iterator it;
    char a;
    int t;cin >> t;
    while (t--)
    {
        cin >> a;
        it = find(ch.begin(), ch.end(), a);
        if (it == ch.end())
        {
            ch.push_back(a);
        }
    }
    
    sort(ch.begin(), ch.end());
    ch.shrink_to_fit();
    cout << ch[0] << "/";
    

    
    return 0;
}
