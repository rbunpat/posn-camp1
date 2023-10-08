#include <bits/stdc++.h>

using namespace std;

int main() {
    int year, naksadID;

    string naksad;

    cin >> year;

    naksadID = year % 12;

    switch(naksadID) {
        case 1 :
            naksad = "HORSE";
            break;
        case 2 :
            naksad = "GOAT";
            break;
        case 3 :
            naksad = "MONKEY";
            break;
        case 4 :
            naksad = "ROOSTER";
            break;
        case 5 :
            naksad = "DOG";
            break;
        case 6 :
            naksad = "PIG";
            break;
        case 7 :
            naksad = "RAT";
            break;
        case 8 :
            naksad = "OX";
            break;
        case 9 :
            naksad = "TIGER";
            break;
        case 10 :
            naksad = "RABBIT";
            break;
        case 11 :
            naksad = "DRAGON";
            break;
        case 0 :
            naksad = "SNAKE";
            break;
        default :
            break;
    }

    cout << year << endl;
    cout << naksadID << endl;
    cout << naksad ;



    return 0;
}