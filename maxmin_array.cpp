#include <iostream>
using namespace std;

int getmax(int arr[], int n)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}
int main()
{
    int size;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Biggest number is " << getmax(num, size);
    return 0;
}