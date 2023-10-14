#include <bits/stdc++.h>

using namespace std;

int main() {

    int totalPrice;
    float vat = 0.07;
    float total;
    struct product
    {
        string name;
        int price;
        int quantity;
        int total;
    };

    int n;
    cin >> n;

    product products[n];

    for (int i = 0; i < n; i++) {
        cin >> products[i].name >> products[i].price >> products[i].quantity;
        products[i].total = products[i].price * products[i].quantity;
        totalPrice += products[i].total;
    }

    for (int i = 0; i < n; i++) {
        cout << products[i].name << " " << products[i].price << " " << products[i].quantity << " " << products[i].total << endl;
    }

    cout << "Before VAT = " << totalPrice << endl;

    cout << "VAT 7% = " << totalPrice * vat << endl;

    total = totalPrice + (totalPrice * vat);
    cout << "TOTAL = " << total << endl;





    

    return 0;
}