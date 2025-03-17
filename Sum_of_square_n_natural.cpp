#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number till you want sum of square of natural numbers : " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    cout << "The sum of square of natural numbers till " << n << " are " << sum << endl;
    return 0;
}