#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number till you want sum of all natural numbers : " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Total sum till given range is : " << sum << endl;
    return 0;
}