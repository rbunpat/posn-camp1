#include <bits/stdc++.h>

using namespace std;

int main() {
    struct students {
        string name;
        int age;
    } students[10];

    for (int i = 0; i < 10; i++) {
        cin >> students[i].name >> students[i].age;
    }

    for (int i = 0; i < 10; i++) {
        if (students[i].age >= 18) {
            cout << students[i].name << " " << students[i].age << endl;
        }
        
    }



    return 0;
}