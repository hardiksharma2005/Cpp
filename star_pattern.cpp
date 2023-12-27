#include <iostream>
using namespace std;

int main()
{

    int n; // row number
    cin >> n;

    int i = 1; // from which row to which row

    while (i <= n)
    {
        int j = 1; // column number
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}