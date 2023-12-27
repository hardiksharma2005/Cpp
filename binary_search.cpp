#include <iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start / 2); // koi bada integer ko sambhal ne ke liye
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else // key<arr[mid]
        {
            end = mid - 1;
        }
        mid = start + (end - start / 2);
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number you want to find " << endl;
    cin >> n;
    int array[5] = {2, 5, 8, 9, 25};
    int index = search(array, 5, n);
    cout << index;
    return 0;
}