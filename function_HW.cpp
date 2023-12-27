#include <iostream>
using namespace std;

// question 1:
// int AP(int n)
// {
//     int ans;
//     for (int i = 1; i <= n; i++)
//     {
//         ans = ((3 * n) + 7);
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     cout << "The nth term is " << AP(n);
//     return 0;
// }

// question 2:
int checker(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n >> 1;
        return count;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << checker(n);
    return 0;
}