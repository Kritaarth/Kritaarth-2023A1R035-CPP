#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the range till you want to know which prime number falls : " << endl;
    cin >> n;
    int i, j;
    int count = 0;
    cout << "The prime sequence till given range is : " << endl;
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << i << " ";
        }
        count = 0;
    }
    return 0;
}