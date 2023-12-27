#include <iostream>
using namespace std;

// // swap alternate:
// void swap_alt(int arr[], int n)
// {
//     int num1 = 0;
//     int num2 = 1;
//     int temp;
//     while (num1 < n && num2 < n)
//     {
//         swap(arr[num1], arr[num2]);
//         // temp = arr[num2];
//         // arr[num2] = arr[num1];
//         // arr[num1] = temp;
//         num1 += 2;
//         num2 += 2;
//     }
// }

// void printing(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
// }

// int main()
// {
//     int array_odd[5] = {4, 5, 3, 6, 2};
//     int array_even[6] = {4, 5, 3, 6, 2, 7};
//     swap_alt(array_odd, 5);
//     printing(array_odd, 5);
//     cout << endl;
//     swap_alt(array_even, 6);
//     printing(array_even, 6);

//     return 0;
// }

// // duplicate finder
// void check(int arr[], int n)
// {
//     for (int k = 0; k < n; k++)
//     {
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[k] == arr[i])
//             {
//                 count++;
//             }
//         }
//         if (count > 1)
//         {
//             cout << arr[k] << " appeared more than 1 time, ";
//         }
//         cout << "Number of appearances of " << arr[k] << " is " << count << endl;
//     }
// }
// int main()
// {
//     int array[5] = {4, 3, 5, 2, 2};
//     check(array, 5);
//     return 0;
// }

// // intersection
// void checker(int arr1[], int arr2[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < n; k++)
//         {
//             if (arr2[k] == arr1[i])
//             {
//                 cout << arr1[i] << endl;
//                 break;
//                 arr2[k] = INT32_MIN;
//             }
//         }
//     }
// }
// int main()
// {
//     int array1[5] = {3, 5, 4, 8, 2};
//     int array2[5] = {5, 9, 7, 3, 1};
//     checker(array1, array2, 5);
//     return 0;
// }

// // pair sum
// void sum(int arr[], int n, int ans)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == ans)
//             {
//                 cout << "[" << arr[i] << "," << arr[j] << "] ";
//             }
//         }
//     }
// }
// int main()
// {
//     int k;
//     cout << "Enter the number " << endl;
//     cin >> k;
//     int array[10] = {5, -4, 8, -2, 7, -5, 3, 2, -9, 6};
//     sum(array, 10, k);
//     return 0;
// }

// // triplet sum
// void sum(int arr[], int n, int ans)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = i + 2; k < n; k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == ans)
//                 {
//                     cout << "[" << arr[i] << "," << arr[j] << "," << arr[k] << "] ";
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     int k;
//     cout << "Enter the number " << endl;
//     cin >> k;
//     int array[10] = {5, -4, 8, -2, 7, -5, 3, 2, -9, 6};
//     sum(array, 10, k);
//     return 0;
// }

// sorting 0&1
// void sort(int arr[], int n)
// {
//     int left = 0;
//     int right = n - 1;
//     while (left < right)
//     {
//         while (arr[left] == 0 && left < right)
//         {
//             left++;
//         }
//         while (arr[right] == 1 && left < right)
//         {
//             right--;
//         }
//         if (arr[left] == 1 && arr[right] == 0)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
// }
// void printing(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
// }
// int main()
// {
//     int array[8] = {1, 1, 0, 0, 0, 0, 1, 0};
//     sort(array, 8);
//     printing(array, 8);
//     return 0;
// }

// sort 0,1,2
int main()
{
    int nums[6] = {2, 0, 2, 1, 1, 0};
    int l = 0;
    int m = 0;
    int h = 5;

    while (m <= h)
    {
        if (nums[m] == 0)
        {
            swap(nums[l], nums[m]);
            l++;
            m++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else if (nums[m] == 2)
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i];
    }

    return 0;
}