#include <iostream>
using namespace std;

bool ifpossible(int arr[], int n, int p, int m)
{
    int painterCount = 1;
    int totaltime = 0;
    for (int i = 0; i < n; i++)
    {
        if (totaltime + arr[i] <= m)
        {
            totaltime += arr[i];
        }
        else
        {
            painterCount++;
            totaltime = 0;
            if (arr[i] > m || painterCount > p)
            {
                return false;
            }
            totaltime = arr[i];
        }
    }
    return true;
}
int ans_check(int arr[], int n, int p)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int s = 0;
    int e = sum;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (ifpossible(arr, n, p, m))
        {
            ans = m;
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int array1[4] = {5, 5, 5, 5};
    cout << ans_check(array1, 4, 2) << endl;
    int array2[4] = {10, 20, 30, 40};
    cout << ans_check(array2, 4, 2) << endl;
    return 0;
}