#include <bits/stdc++.h>

using namespace std;

int main() {
    int breadCount, peopleCount, breadPerPerson, peopleFull, breadLeft;
    cin >> breadCount >> peopleCount >> breadPerPerson;



    if (breadCount == 0 || peopleCount == 0 || breadPerPerson == 0) {
        cout << peopleCount << " people" << endl;

        cout << breadCount << " left" << endl;
        return 0;
    }

    peopleFull = breadCount / breadPerPerson;

    breadLeft = breadCount % breadPerPerson;
    cout << peopleFull << " people" << endl;

    cout <<breadLeft << " left" << endl;

    

    return 0;
}