#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number : " << endl;
    cin >> a;
    int num = a;
    int count = 0;
    int i = 1;
    while (a != 0)
    {
        if (a & 1 == 1)
        {
            count++;
        }
        a = a >> i;
    }
    cout << "Number of set bits in " << num << " is " << count;
    return 0;
}