#include <bits/stdc++.h>

using namespace std;

void GetMoney(int);
int main() {
    
    int money;
    cin >> money;

    GetMoney(money);

    return 0;
}

void GetMoney(int money){
    int money1000 = money / 1000;
    money %= 1000;
    int money500 = money / 500;
    money %= 500;
    int money100 = money / 100;
    money %= 100;
    int money50 = money / 50;
    money %= 50;
    int money20 = money / 20;
    money %= 20;
    int money10 = money / 10;
    money %= 10;
    int money5 = money / 5;
    money %= 5;
    int money2 = money / 2;
    money %= 2;
    int money1 = money / 1;
    money %= 1;

    cout << "1000: " << money1000 << endl;
    cout << "500: " << money500 << endl;
    cout << "100: " << money100 << endl;
    cout << "50: " << money50 << endl;
    cout << "20: " << money20 << endl;
    cout << "10: " << money10 << endl;
    cout << "5: " << money5 << endl;
    cout << "2: " << money2 << endl;
    cout << "1: " << money1 << endl;
    return;
}