#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int num = n;
    int rem;
    int pal = 0;
    while (n != 0)
    {
        rem = n % 10;
        pal = pal * 10 + rem;
        n = n / 10;
    }
    if (pal == num)
    {
        cout << "Entered number is a palindrome number " << endl;
    }
    else
    {
        cout << "Number is not a palindrome number " << endl;
    }
    return 0;
}