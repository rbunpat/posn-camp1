#include <bits/stdc++.h>

using namespace std;

int main() {
    struct person {
        string name, surname;
        int age;
        char gender;
    } student1, student2;

    student1.name = "Somchai";
    student1.surname = "Jaidee";
    student1.age = 18;
    student1.gender = 'M';

    cout << student1.name;
    
    return 0;
}