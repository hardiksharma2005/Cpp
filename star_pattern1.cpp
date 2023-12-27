#include <iostream>
using namespace std;

int main()
{

    // example 1
    // int n;
    // cin >> n;
    // int i = 1;                                1234
    // while (i <= n)                            1234
    // {                                         1234
    //     int j = 1;                            1234
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 2
    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;
    // while (i <= n)                           1 2 3 4
    // {                                        5 6 7 8
    //     int j = 1;                           9 10 11 12
    //     while (j <= n)                       13 14 15 16
    //     {
    //         cout << count << " ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 3
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;                              *
    //     while (j <= i)                          **
    //     {                                       ***
    //         cout << '*';                        ****
    //         j = j + 1;
    //     }
    //     i = i + 1;
    //     cout << endl;
    // }

    // example 4
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;                          1
    //     while (j <= i)                      22
    //     {                                   333
    //         cout << i;                      4444
    //         j = j + 1;
    //     }
    //     i = i + 1;
    //     cout << endl;
    // }

    // example 5
    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;                           1
    // while (i <= n)                           23
    // {                                        456
    //     int j = 1;                           78910
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     i = i + 1;
    //     cout << endl;
    // }

    // example 6
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)                               1
    // {                                            23
    //     // int j = 1;                            345
    //     int j = i;                               4567
    //     while (j < 2*i)
    //     {
    //         cout << j << " ";
    //         // value = value + 1;
    //         j = j + 1;
    //     }
    //     i = i + 1;
    //     cout << endl;
    // }

    // example 7
    // int n;
    // cin >> n;
    // int i = 1;                                 1
    // while (i <= n)                             21
    // {                                          321
    //     int j = 1;                             4321
    //     while (j <= i)
    //     {
    //         cout << (i - j + 1) << " ";
    //         j = j + 1;
    //     }
    //     i = i + 1;
    //     cout << endl;
    // }

    // example 8
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)                                AAAA
    // {                                             BBBB
    //     int j = 1;                                CCCC
    //     char ch = 'A' + i - 1;                    DDDD
    //     while (j <= n)
    //     {
    //         cout << ch << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 9
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;                                  ABCD
    //     while (j <= n)                              ABCD
    //     {                                           ABCD
    //         char ch = 'A' + j - 1;                  ABCD
    //         cout << ch << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 10
    // int n;
    // cin >> n;
    // int i = 1;
    // char ch = 'A';                                ABCD
    // while (i <= n)                                EFGH
    // {                                             IJKL
    //     int j = 1;                                MNOP
    //     while (j <= n)
    //     {
    //         cout << ch << " ";
    //         j = j + 1;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 11
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;                               ABCD
    //     while (j <= n)                           BCDE
    //     {                                        CDEF
    //         char ch = 'A' + j + i - 2;           DEFG
    //         cout << ch << " ";
    //         j = j + 1;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 12
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {                                        A
    //     int j = 1;                           BB
    //     char ch = 'A' + i - 1;               CCC
    //     while (j <= i)                       DDDD
    //     {
    //         cout << ch << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 12
    // int n;
    // cin >> n;
    // int i = 1;
    // char ch = 'A';
    // while (i <= n)
    // {
    //     int j = 1;                          A
    //     while (j <= i)                      BC
    //     {                                   DEF
    //         cout << ch << " ";              GHIJ
    //         j = j + 1;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 13
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;                              A
    //     while (j <= i)                          BC
    //     {                                       CDE
    //         char ch = 'A' + i + j - 2;          DEFG
    //         cout << ch << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 14
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {                                       D
    //     int j = 1;                          CD
    //     char ch = 'A' + n - i;              BCD
    //     while (j <= i)                      ABCD
    //     {
    //         cout << ch << " ";
    //         j = j + 1;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 14 (easy way of example 13)
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A' + i - 1;                  A
    //     while (j <= i)                          BC
    //     {                                       CDE
    //         cout << ch << " ";                  DEFG
    //         j = j + 1;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 15
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)                              *
    // {                                          **
    //     int space = n - i;                    ***
    //     while (space)                        ****
    //     {
    //         cout << " ";
    //         space = space - 1;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 16
    // int n;
    // cin >> n;
    // int i = 1;                                  ****
    // while (i <= n)                              ***
    // {                                           **
    //     int space = n - i + 1;                  *
    //     int j = 1;
    //     while (j <= space)
    //     {
    //         cout << " * ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 17
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int space = 1, j = 1;                        ****
    //     while (space < i)                             ***
    //     {                                              **
    //         cout << " ";                                *
    //         space = space + 1;
    //     }
    //     while (j <= (n - i + 1))
    //     {
    //         cout << "*";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 18
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << " ";
    //         space = space - 1;
    //     }
    //     int j = 1;                                  1
    //     while (j <= i)                             121
    //     {                                         12321
    //         cout << j;                           1234321
    //         j = j + 1;
    //     }
    //     int k = i - 1;
    //     while (k >= 1)
    //     {
    //         cout << k;
    //         k = k - 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 19
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int space = 1;                            1111
    //     while (space < i)                          222
    //     {                                           33
    //         cout << " ";                             4
    //         space = space + 1;
    //     }
    //     int j = 1;
    //     while (j <= (n - i + 1))
    //     {
    //         cout << i;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 20
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int space = n - i;                        1
    //     while (space)                            22
    //     {                                       333
    //         cout << " ";                       4444
    //         space = space - 1;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 21
    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int space = 1;
    //     while (space < i)                            1234
    //     {                                             234
    //         cout << " ";                               34
    //         space = space + 1;                          4
    //     }
    //     int j = 1;
    //     int count = i;
    //     while (j <= (n - i + 1))
    //     {
    //         cout << count;
    //         j = j + 1;
    //         count = count + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 22
    // int n;
    // cin >> n;
    // int i = 1;
    // int count = 1;
    // while (i <= n)
    // {
    //     int space = 1;                                       1
    //     while (space <= (n - i))                            23
    //     {                                                  456
    //         cout << " ";                                  78910
    //         space = space + 1;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count;
    //         j = j + 1;
    //         count = count + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    // example 23
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int count = 1;
        while (j <= (n - i + 1))  // 1234554321
        {                         // 1234**4321
            cout << count << " "; // 123****321
            count = count + 1;    // 12******21
            j = j + 1;            // 1********1
        }
        int star = (2 * i - 2);
        int k = 1;
        while (k <= star)
        {
            cout << "*"
                 << " ";
            k = k + 1;
        }
        int num = n - i + 1;
        int l = 1;
        while (num)
        {
            cout << num << " ";
            num = num - 1;
            l = l + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}