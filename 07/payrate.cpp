#include <bits/stdc++.h>

using namespace std;

int main() {
    char worktype;
    int workamount;

    cin >> worktype >> workamount;

    worktype = toupper(worktype);

    switch(worktype) {
        case 'A':
            cout << "Payrate: " << workamount * 30;
            break;
        case 'B':
            cout << "Payrate: " << workamount * 40;
            break;
        case 'C':
            cout << "Payrate: " << workamount * 45;
            break;
        default:
            cout << "Input Error";
            break;
    }
    

    return 0;
}