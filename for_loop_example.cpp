#include <iostream>
using namespace std;

int main()
{
    // example 1 (fibonacci)
    // int a = 0;
    // int b = 1;
    // int nextnum;
    // cout << a << " ";
    // cout << b << " ";
    // for (int i = 0; i < 10; i++)
    // {
    //     nextnum = a + b;
    //     cout << nextnum << " ";
    //     a = b;
    //     b = nextnum;
    // }

    // example 2(prime num.)
    int n;
    cin >> n;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number" << endl;
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "Not a prime number" << endl;
    }
    else
    {
        cout << "Prime number" << endl;
    }

    return 0;
}