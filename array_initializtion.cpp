#include <iostream>
using namespace std;

void array(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    // array initialization
    int a[5];
    fill_n(a, 5, 2);
    cout << a[3] << endl;

    // using with function
    int arr1[5] = {4, 5, 2};
    array(arr1);
    return 0;
}