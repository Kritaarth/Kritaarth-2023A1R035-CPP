#include <iostream>
using namespace std;
int main()
{
    int n;
    string binary[100];
    cout << "Enter the decimal number : " << endl;
    cin >> n;
    cout << "The binary equivalent to " << n << " is " << endl;
    int i = 0;
    while (n != 0)
    {
        if ((n & 1) == 1)
        {
            binary[i] = "1";
            i++;
        }
        else
        {
            binary[i] = "0";
            i++;
        }
        n = n >> 1;
    }
    int j;
    for (j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
    return 0;
}