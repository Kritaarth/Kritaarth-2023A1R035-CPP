#include <iostream>
using namespace std;
int main()
{
    int num1, dem1;
    cout << "Enter the numerator 1 and denominator 1 : " << endl;
    cin >> num1 >> dem1;
    int num2, dem2;
    cout << "Enter the numerator 2 and denominator 2 : " << endl;
    cin >> num2 >> dem2;
    cout << "The 2 fractions are " << num1 << "/" << dem1 << " and " << num2 << "/" << dem2 << endl;
    int d;
    int new_num, new_dem;
    new_num = (num1 * dem2) + (num2 * dem1);
    new_dem = dem1 * dem2;
    if (new_num > new_dem)
    {
        d = new_num;
    }
    else
    {
        d = new_dem;
    }
    int i;
    for (i = 2; i < d; i++)
    {
        while(new_num % i == 0 && new_dem % i == 0)
        {
            new_num = new_num / i;
            new_dem = new_dem / i;
        }
    }
    cout << "The sum of 2 fraction is : " << new_num << "/" << new_dem << endl;
    return 0;
}