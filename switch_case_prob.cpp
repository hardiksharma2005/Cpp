#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount: " << endl;
    cin >> amount;
    int notes;
    cout << "Enter which notes do you want" << endl;
    cin >> notes;
    int Rs100, Rs50, Rs20, Rs1;
    switch (notes)
    {
    case 100:
        Rs100 = amount / 100;
        cout << "Amount of 100Rs notes are: " << Rs100 << endl;
        break;
        amount % 100;
    case 50:
        Rs50 = amount / 50;
        cout << "Amount of 50Rs notes are: " << Rs50 << endl;
        break;
        amount % 50;
    case 20:
        Rs20 = amount / 20;
        cout << "Amount of 20Rs notes are: " << Rs20 << endl;
        break;
        amount % 20;
    case 1:
        Rs1 = amount / 1;
        cout << "Amount of 1Rs notes are: " << Rs1 << endl;
        break;
        amount % 1;
    default:
        cout << "Invalid" << endl;
        break;
    }
    return 0;
}