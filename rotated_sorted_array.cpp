#include <iostream>
using namespace std;

int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int m = (s + e) / 2;
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
        m = (s + e) / 2;
    }
    return s;
}
int binary_search(int arr[], int s, int e, int k)
{
    int start = s;
    int end = e;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (k == arr[mid])
        {
            return mid;
        }
        if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int pos_find(int arr[], int n, int k)
{
    int pivot = getpivot(arr, n);
    if ((k >= arr[pivot]) && (k <= arr[n - 1]))
    {
        return binary_search(arr, pivot, n - 1, k);
    }
    else
    {
        return binary_search(arr, 0, pivot - 1, k);
    }
}
int main()
{
    int key;
    cout << "Enter the number " << endl;
    cin >> key;
    int array[5] = {7, 8, 2, 3, 5};
    cout << "Pivot is " << getpivot(array, 5) << endl;
    cout << "the element exists at " << pos_find(array, 5, key);
    return 0;
}