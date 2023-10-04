#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 3;
    cout << "a = " << a << endl; // a = 5
    cout << " prefix = " << ++a << endl; // prefix = 6
    cout << "current = " << a << endl; // current = 6

    cout << "b = " << b << endl; // b = 3
    cout << "postfix = " << b++ << endl; // postfix = 3
    cout << "current = " << b << endl; // current = 4
    
    return 0;
}
