#include <bits/stdc++.h>

using namespace std;

int main() {
    int breadCount, peopleCount, breadPerPerson, peopleFull, breadLeft;
    cin >> breadCount >> peopleCount >> breadPerPerson;

    peopleFull = breadCount / breadPerPerson;

    breadLeft = breadCount % breadPerPerson;

    cout << peopleFull << " people" << endl;

    cout <<breadLeft << " left" << endl;

    

    return 0;
}