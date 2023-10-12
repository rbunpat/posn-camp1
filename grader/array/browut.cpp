#include <bits/stdc++.h>

using namespace std;

int main() {
    string secretMessage;
    
    int messageLength = 0;
    float y = 0;
    cin >> secretMessage >> y;

    messageLength = secretMessage.length();
    int messageArray[messageLength];

    for (int i = 0; i < messageLength; i++) {
        //convert to ascii code
        messageArray[i] = (secretMessage[i]) + floor(((2 * pow(y, 3)) / 30));
    }

    for (int k = 0; k < messageLength; k++) {
        cout << char (messageArray[k]);
    }

    char i = 'I';
    


    



    return 0;
}