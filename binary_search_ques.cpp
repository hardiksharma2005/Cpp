#include <iostream>
using namespace std;

// // first or last occurence of an element in an array
// int first_occurence(int arr[], int n, int key)
// {
//     int start = 0;
//     int end = n - 1;
//     int mid = start + (end - start / 2);
//     int ans = -1;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start / 2);
//     }
//     return ans;
// }
// int last_occurence(int arr[], int n, int key)
// {
//     int start = 0;
//     int end = n - 1;
//     int mid = start + (end - start / 2);
//     int ans = -1;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start / 2);
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter the value " << endl;
//     cin >> n;
//     int array[8] = {0, 0, 1, 1, 3, 3, 3, 4};
//     int foc = first_occurence(array, 8, n);
//     cout << "First occurence of " << n << " is " << foc << endl;
//     int loc = last_occurence(array, 8, n);
//     cout << "Last occurence of " << n << " is " << loc << endl;
//     int tot_occurence = (loc - foc) + 1;
//     cout << "Total number of occurence of " << n << " is " << tot_occurence << endl;
//     return 0;
// }

// peak of an mountain array
int peak(int arr[], int n)
{
    int l = 0, h = n - 1;
    int m;
    while (l < h)
    {
        m = (l + h) / 2;
        if ((arr[m] > arr[m - 1]) && (arr[m] > arr[m + 1]))
        {
            return m;
        }
        if (arr[m] > arr[m - 1])
        {
            l = m;
        }
        else if (arr[m] > arr[m + 1])
        {
            h = m;
        }
    }
    return m;
}

int main()
{
    int array[4] = {0, 2, 1, 0};
    int peak_occ = peak(array, 4);
    cout << peak_occ;
    return 0;
}
