#include <bits/stdc++.h>
using namespace std;
void AcceptData()
{
    // string name, school;
    char name[100], school[100];
    // char16_t name[100], school[100];
    cout << "Enter your name : ";
    cin.getline(name, 100);
    // cin >> name;
    // getline(cin, name);
    cout << "Enter your school : ";
    cin.getline(school, 100);
    // cin >> school;
    // getline(cin, school);
    cout << "Your name is " << name << endl;
    cout << "Your school is " << school;
}

main()
{
    AcceptData();
}