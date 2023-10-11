#include <bits/stdc++.h>
using namespace std;

int SumNum(int numStart, int numStop)
{
    int i, sum;
    i = numStart;
    sum = 0;
    do
    {
        sum = sum + i;
        i = i + 1;
    } while (i <= numStop);
    return sum;
}
main()
{
    int st, sp, sum;
    cout << "Enter num start : ";
    cin >> st;
    cout << "Enter num stop : ";
    cin >> sp;
    sum = SumNum(st, sp);
    cout << "Sum num is " << sum;
}