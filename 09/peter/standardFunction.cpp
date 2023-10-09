#include <iostream>
#include <string>
using namespace std;
main()
{
    string A = "This is a book.";
    string B = "This is a Book.";
    if (A == B)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not Equal";
    }
    cout << endl;
    cout << "Length Sring A = " << A.length() << endl;
    cout << "Position 1 of String B is " << B[1] << endl;
    cout << "Text in position 8-13 of Stringf B is " << B.substr(8, 6);
    for (int i = 0; i < A.length(); i++)
    {
        cout << toupper(A[i]);
    }
}