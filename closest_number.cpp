#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of array : " << endl;
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The sorted array is  : " << endl;
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
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }
    int target;
    cout << "Enter the element you want closest number form the array is : " << endl;
    cin >> target;
    int closest = a[0]; // assume first element as the closest element
    for (i = 1; i < n; i++)
    {
        if (abs(a[i] - target) < abs(closest - target)) // mod of subtraction using abs keyword
        {
            closest = a[i];
        }
    }
    cout << "Closest element to the " << target << " element is " << closest << endl;
    return 0;
}