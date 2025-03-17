#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter a range : " << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "1 is not a 3 divisor number" << endl;
    }
    else
    {
        cout << "The numbers that are 3 divisors in the given range are :" << endl;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count == 1)
            {
                cout << i << " ";
            }
            count = 0;
        }
    }
    return 0;
}