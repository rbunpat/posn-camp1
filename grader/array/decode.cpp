#include <bits/stdc++.h>

using namespace std;

int main()
{
    string secretText;
    getline(cin, secretText);

    char secretArray[secretText.length()];
    char revArray[secretText.length()];

    for (int i = 0; i < secretText.length(); i++)
    {
        secretArray[i] = secretText[i];
    }

    // reverse the text and store it in revArray
    for (int i = 0; i < secretText.length(); i++)
    {
        revArray[i] = secretArray[secretText.length() - i - 1];
    }

    for (int i = 0; i < secretText.length(); i++)
    {
        if (toupper(revArray[i]) == 'R')
        {
            revArray[i] = 'E';
        }
        else if (toupper(revArray[i]) == 'W')
        {
            revArray[i] = 'R';
        }
        else if (toupper(revArray[i]) == 'E')
        {
            revArray[i] = 'W';
        }
    }

    cout << revArray << endl;

    return 0;
}