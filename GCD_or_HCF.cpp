#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the 2 numbers for which you have to claculate GCD : " << endl;
    cin >> a >> b;
    int c;
    if (a < b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    int gcd;
    for (int i = 2; i <= c; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    return 0;
}