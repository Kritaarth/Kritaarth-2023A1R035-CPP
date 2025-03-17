#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " is a even number" << endl;
    }
    else
    {
        cout << n << " is a Odd number" << endl;
    }
    return 0;
}