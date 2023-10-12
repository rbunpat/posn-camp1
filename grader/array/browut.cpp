#include <bits/stdc++.h>

using namespace std;

int main() {
    string secretMessage;
    
    int messageLength;
    float y;
    cin >> secretMessage >> y;

    messageLength = secretMessage.length();
    int messageArray[messageLength];

    for (int i = 0; i < messageLength; i++) {
        //convert to ascii code
        messageArray[i] = ((int)secretMessage[i]) - floor(((2 * pow(y, 3)) / 30));
    }

    for (int k = 0; k < messageLength; k++) {
        cout << char(messageArray[k]);
    }
    


    



    return 0;
}