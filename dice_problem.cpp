#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the dice number for which you want its oppsite face  : " << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "6";
    }
    else if (n == 2)
    {
        cout << "5";
    }
    else if (n == 3)
    {
        cout << "4";
    }
    else if (n == 4)
    {
        cout << "3";
    }
    else if (n == 5)
    {
        cout << "2";
    }
    else if (n == 6)
    {
        cout << "1";
    }
    else
    {
        cout << "Invalid number entered ";
    }
    return 0;
}