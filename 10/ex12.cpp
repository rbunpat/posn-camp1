#include <bits/stdc++.h>
using namespace std;

float MultiNum(float n1, float n2)
{
    float m;
    m = n1 * n2;
    return m;
}

main()
{
    float num1, num2, multi;
    cin >> num1 >> num2;
    multi = MultiNum(num1, num2);
    cout << "Multiply is " << multi;
}