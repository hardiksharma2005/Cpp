#include <iostream>
using namespace std;

int main()
{
    // int a = 2;
    // int b = a + 1;

    // if ((a = 3) == b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << (a + 1) << endl;
    // }

    // int a = 24;

    // if (a > 20)
    // {
    //     cout << "love" << endl;
    // }
    // else if (a == 24)
    // {
    //     cout << "har" << endl;
    // }
    // else
    // {
    //     cout << "hardik";
    // }

    // char ch;
    // ch = cin.get();
    // if ((ch >= 97) && (ch <= 122))
    // {
    //     cout << "this is lower case" << endl;
    // }
    // else if ((ch >= 65) && (ch <= 90))
    // {
    //     cout << "this is upper case" << endl;
    // }
    // else
    // {
    //     cout << "this is numeric" << endl;
    // }

    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << sum;
    return 0;
}