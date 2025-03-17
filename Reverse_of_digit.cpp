#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int num = n;
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << "Reverse of " << num << " is " << rev << endl;
    return 0;
}