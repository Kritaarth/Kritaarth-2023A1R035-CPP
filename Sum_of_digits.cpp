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
    cout << "The sum of digits of entered number is : " << sum << endl;
    return 0;
}