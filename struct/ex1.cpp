#include <bits/stdc++.h>

using namespace std;

int main() {
    struct product
    {
        string name;
        int price;
        int quantity;
    };

    product mama, yumyum, waiwai, changnoi;

    mama.name = "Mama";
    mama.price = 6;
    mama.quantity = 2;

    yumyum.name = "YumYum";
    yumyum.price = 7;
    yumyum.quantity = 1;

    waiwai.name = "WaiWai";
    waiwai.price = 5;
    waiwai.quantity = 5;


    changnoi.name = "Changnoi";
    changnoi.price = 4;
    changnoi.quantity = 3;

    cout << mama.name << " " << mama.price << " " << mama.quantity << endl;
    cout << yumyum.name << " " << yumyum.price << " " << yumyum.quantity << endl;
    cout << waiwai.name << " " << waiwai.price << " " << waiwai.quantity << endl;
    cout << changnoi.name << " " << changnoi.price << " " << changnoi.quantity << endl;


    

    return 0;
}