#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Write the value of A: " << endl;
    cin >> a;
    int b;
    cout << "Write the value of B: " << endl;
    cin >> b;
    char calc;
    cout << "Write the operation: " << endl;
    cin >> calc;
    switch (calc)
    {
    case '+':
        cout << "a+b = " << a + b;
        break;
    case '-':
        cout << "a-b = " << a - b;
        break;
    case '/':
        cout << "a/b = " << a / b;
        break;
    case '*':
        cout << "a*b = " << a * b;
        break;
    case '%':
        cout << "a%b = " << a % b;
        break;
    default:
        cout << "Operation is invalid";
        break;
    }
    return 0;
}