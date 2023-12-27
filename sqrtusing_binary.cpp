#include <iostream>
using namespace std;

int sqr(int n)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    long long int ans = INT32_MIN;
    while (s < e)
    {
        long long int square = m * m;
        if (square == n)
        {
            return m;
        }
        if (square < n)
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
double moreprecision(int n, int precision, int tempsol)
{
    double decimal = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        decimal = decimal / 10;
        for (double j = ans; j * j < n; j = j + decimal)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number " << endl;
    cin >> num;
    int tempsol = sqr(num);
    cout << "Square root of " << num << " is " << moreprecision(num, 3, tempsol);
    return 0;
}