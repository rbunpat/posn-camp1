#include<bits/stdc++.h>

using namespace std;

bool a[110];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    a[0] = true;
    if(n<6){
        cout << "no";
    }
    for(int i=1; i<=n; i++){
        if(i>=6){
            a[i]=a[i]||a[i-6];
        }
        if(i>=9){
            a[i]=a[i]||a[i-9];
        }
        if(i>=20){
            a[i]=a[i]||a[i-20];
        }
    }
    for(int i=1; i<=n; i++){
        if(a[i]==true){
            cout << i << "\n";
        }
    }
    return 0;
}