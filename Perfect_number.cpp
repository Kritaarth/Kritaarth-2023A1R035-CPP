// A perfect number is a number which is equal to the sum of its divisor except the number itself
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        cout << n << " is a perfect number";
    }
    else
    {
        cout << n << " is not a perfect number";
    }
    return 0;
}