#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int);

int main()
{

    int count;

    int primeCount, primeSum;

    primeCount = primeSum = 0;

    cin >> count;

    int number[count];
    for (int i = 0; i < count; i++)
    {
        cin >> number[i];
        if (checkPrime(number[i]))
        {
            primeSum += number[i];
            primeCount++;
        }

    }
    cout << primeCount << endl;
    cout << primeSum << endl;
    return 0;
}
bool checkPrime(int number)
{

    bool is_prime;

    is_prime = true;

    int n, i;
    n = number;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    // loop to check if n is prime
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}