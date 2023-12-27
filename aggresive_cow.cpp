#include <iostream>
#include <algorithm>
using namespace std;

bool ispossible(int arr[], int n, int c, int m)
{
    int cowcount = 1;
    int lastpos = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastpos >= m)
        {
            cowcount++;
            if (cowcount == c)
            {
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}
int ans_check(int arr[], int n, int c)
{
    sort(arr, arr + n);
    int s = 0;
    int e = arr[n - 1];
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (ispossible(arr, n, c, m))
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
int main()
{
    int array[5] = {4, 2, 1, 3, 6};
    cout << ans_check(array, 5, 2);
    return 0;
}