#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the first term of GP : " << endl;
    cin >> a;
    int r;
    cout << "Enter the common ratio : " << endl;
    cin >> r;
    int n;
    cout << "Enter the Nth term which you have to find from the GP sequence : " << endl;
    cin >> n;
    int b[n];
    int i;
    b[0] = a;
    for (i = 1; i < n; i++)
    {
        a = a * r;
        b[i] = a;
    }
    cout << "The GP sequence is : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}