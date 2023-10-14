#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[5]={};
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin >> temp;
            a[j]=a[j]+temp;
        }
    }


    double res = a[0]+a[1]*0.75+a[2]*0.5+a[3]*0.25+a[4]*0.125;

    cout << ceil(res);



}