#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of which you have to find Pair Cube Count : " << endl;
    cin >> n;
    int i, j;
    int count = 0;
    for (i = 0; i < n / 2; i++)
    {
        for (j = 0; j < n / 2; j++)
        {
            if ((pow(i, 3) + pow(j, 3) == n) || (pow(j, 3) + pow(i, 3) == n))
            {
                count++;
            }
        }
    }
    cout << "Their are " << count << " Pair Cube Counts" << endl;
    return 0;
}