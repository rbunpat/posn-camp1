#include <bits/stdc++.h>

using namespace std;

void swap(bool *x, bool *y) {
    bool temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main() {
    bool cup1, cup2, cup3;

    cup1 = cup2 = cup3 = false;

    int currentCup = 0;

    cin >> currentCup;

    if (currentCup == 1) {
        cup1 = true;
    } else if (currentCup == 2) {
        cup2 = true;
    } else {
        cup3 = true;
    }

    string moves;
    cin >> moves;

    for (int i = 0; i < moves.length(); i++) {
        switch (moves[i]) {
            case 'a':
                swap(&cup1, &cup2);
                break;
            case 'b':
                swap(&cup2, &cup3);
                break;
            case 'c':
                swap(&cup1, &cup3);
                break;
            default:
                break;
        }
    }

    int currentPosition = 0;

    if (cup1) {
        currentPosition = 1;
    } else if (cup2) {
        currentPosition = 2;
    } else {
        currentPosition = 3;
    }

    // int startingPosition;
    // int swapto = 0;
    

    // cin >> startingPosition;
    // int currentPosition = startingPosition;

    // string moves;
    // cin >> moves;

    // for (int i = 0; i <= moves.length(); i++) {
    //     switch (moves[i]){
    //         case 'a':
    //             swapto = currentPosition - 1;
    //             swap(&currentPosition, &currentPosition - 1);
    //             break;
    //         case 'b':
    //             swap(&currentPosition, &currentPosition + 1);
    //             break;
    //         case 'c':
    //             swap(&currentPosition, &currentPosition - 2);
    //             break;
    //         default:
    //             break;
    //     }
    // }

    cout << currentPosition << endl;

    return 0;
}