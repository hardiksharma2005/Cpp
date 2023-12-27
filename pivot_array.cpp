#include <iostream>
using namespace std;

int pivotindex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        m = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int array[5] = {2, 3, 8, 1, 5};
    cout << "Pivot is " << pivotindex(array, 5) << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int getPivot(int arr[], int n)
// {

//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;

//     while (s < e)
//     {

//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return s;
// }

// int main()
// {
//     int arr[5] = {1, 3, 8, 10, 17};
//     cout << "Pivot is " << getPivot(arr, 5) << endl;
// }