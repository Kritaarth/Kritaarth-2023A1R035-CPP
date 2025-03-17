#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "Enter the Principal amount that have to  borrow : " << endl;
    cin >> p;
    int r;
    cout << "Enter the rate of interest  : " << endl;
    cin >> r;
    int t;
    cout << "Enter the time period : " << endl;
    cin >> t;
    float SI;
    SI = (p * r * t) / 100;
    cout << "The Simple Interest on the Principal amount " << p << " is " << SI << endl;
    return 0;
}