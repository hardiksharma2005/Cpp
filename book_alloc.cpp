#include <iostream>
using namespace std;

// bool is_possible(int arr2[], int n2, int s, int m)
// {
//     int student_count = 1;
//     int pagesum = 0;
//     for (int i = 0; i < n2; i++)
//     {
//         if (pagesum + arr2[i] <= m)
//         {
//             pagesum += arr2[i];
//         }
//         else
//         {
//             student_count++;
//             if (student_count > s || arr2[i] < m)
//             {
//                 return false;
//             }
//             pagesum = arr2[i];
//         }
//         if (student_count > m)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int ans_check(int arr1[], int n1)
// {
//     int sum = 0;
//     int s = 0;
//     for (int i = 0; i < n1; i++)
//     {
//         sum = arr1[i] + sum;
//     }
//     int ans = -2;
//     int e = sum;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (is_possible(arr1, n1, 2, mid))
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    // cout << "checking for mid "<< mid <<endl;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
        if (studentCount > m)
        {
            return false;
        }
        // cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            // cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int array[4] = {10, 20, 30, 40};
    cout << allocateBooks(array, 4, 2);
    return 0;
}