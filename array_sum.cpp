#include <iostream>
using namespace std;

int sum(int arr1[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int arr1[i];
        cin >> arr1[i];
        ans = arr1[i] + ans;
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size of the array ";
    cin >> size;
    int arr[100];
    cout << "Sum of the numbers of array are " << sum(arr, size) << endl;
    return 0;
}