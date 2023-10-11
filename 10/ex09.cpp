#include <bits/stdc++.h>
using namespace std;
void AcceptData()
{
    string name, school;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Enter your school : ";
    getline(cin, school);
    cout << "Your name is " << name << endl;
    cout << "Your school is " << school;
}

main()
{
    AcceptData();
}