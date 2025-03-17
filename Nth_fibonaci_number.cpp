#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the position for which you want the value of fibonacci sequence : " << endl;
    cin >> n;
    int sum = 0, num1 = 0, num2 = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    cout << "The number at " << n << "th position in fibonacci sequence is : " << num1;
    return 0;
}