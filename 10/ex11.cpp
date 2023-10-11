#include <bits/stdc++.h>
using namespace std;
void CalTriangle(float B, float H)
{

    float Area = 0;
    Area = 0.5 * B * H;
    cout << "Area is " << Area;
}

main()
{

    float Base, Height;
    cin >> Base;
    cin >> Height;
    CalTriangle(Base, Height);
}