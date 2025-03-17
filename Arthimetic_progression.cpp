#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of your expression : " << endl;
    cin >> n;
    int a[n];
    int i;
    cout << "Enter the elements : " << endl;
    int j;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "The sorted sequence is : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    int diff = abs(a[0] - a[1]);
    // cout << diff;
    int count = 0;
    for (i = 1; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) != diff)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "The given expression is not a Arthimetic progression" << endl;
    }
    else
    {
        cout << "The given expression is a Arthimetic progression" << endl;
    }
    return 0;
}