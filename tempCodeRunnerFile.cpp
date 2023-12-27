#include <iostream>
using namespace std;

int pivot_index(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s / 2);
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
        m = s + (e - s / 2);
    }
    return s;
}

int main()
{
    int array[5] = {8, 10, 17, 1, 3};
    cout << "Pivot is " << pivot_index(array, 5) << endl;
    return 0;
}