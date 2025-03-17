#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number for which you have to check whether the number is power of 2 or not : " << endl;
    cin >> n;
    int num = n;
    int count = 0;
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            count++;
        }
        n = n / 2;
    }
    if (count == 0)
    {
        cout << num << " is a power of 2" << endl;
    }
    else
    {
        cout << num << " is not a power of 2" << endl;
    }
    return 0;
}