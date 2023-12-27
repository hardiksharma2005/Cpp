#include <iostream>
using namespace std;

bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num;
    cout << "Enter the number you want to found " << endl;
    cin >> num;
    int array[10] = {4, 5, -5, 2, 7, 9, -2, 6, 3, -4};
    bool found = search(array, 10, num);
    if (found)
    {
        cout << "The number is present" << endl;
    }
    else
    {
        cout << "The number is not present" << endl;
    }

    return 0;
}