#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number to check whether its a square root or not : " << endl;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (sqrt(n) == i)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << n << " is a squareroot ";
    }
    return 0;
}