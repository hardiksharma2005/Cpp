#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digit;
    int ans = 0;
    while (n != 0)
    {
        digit = n % 10;
        if (ans > INT32_MAX / 10 || ans < INT32_MIN / 10)
        {
            cout << 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << "answ1 = " << ans << endl;

    return 0;
}