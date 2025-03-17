#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int rem, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    while (sum >= 10)
    {
        int t_sum = 0;
        while (sum != 0)
        {
            t_sum = t_sum + sum % 10;
            sum = sum / 10;
        }
        sum = t_sum;
    }
    cout << "Digit root of entered number is : " << sum;
    return 0;
}