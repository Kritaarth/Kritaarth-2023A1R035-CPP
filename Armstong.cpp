#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int num = n;
    int length = 0;
    while (num != 0)
    {
        num = num / 10;
        length++;
    }
    int rem;
    // int power = 1;
    num = n;
    int sum = 0;
    while (num != 0)
    {
        int power = 1;
        rem = num % 10;
        for (int i = 0; i < length; i++)
        {
            power = power * rem;
        }
        sum = sum + power;
        num = num / 10;
    }
    // cout << sum;
    if (n == sum)
    {
        cout << "Entered number is an armstong number " << endl;
    }
    else
    {
        cout << "Number is not an armstong number " << endl;
    }
    return 0;
}