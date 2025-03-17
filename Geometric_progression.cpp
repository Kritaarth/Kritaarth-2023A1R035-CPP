#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of sequence : " << endl;
    cin >> n;
    int a[n];
    int i;
    cout << "Enter the elements of sequence : " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The entered sequence is : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int count = 0;
    int ratio = abs(a[0] / a[1]);
    for (i = 1; i < n - 1; i++)
    {
        if (a[i] / a[i + 1] != ratio)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "The given expression is a GP ";
    }
    else
    {
        cout << "The given expression is not a GP";
    }
    return 0;
}