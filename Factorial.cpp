#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number you want to find factorial of : " << endl;
    cin >> n;
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << n << " is " << fact << endl;
    return 0;
}