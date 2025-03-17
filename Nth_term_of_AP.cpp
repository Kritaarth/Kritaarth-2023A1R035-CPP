#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the first term of sequence : " << endl;
    cin >> a;
    int d;
    cout << "Enter the difference between two consecutive terms : " << endl;
    cin >> d;
    int n;
    cout << "Enter the term you want to know froom the sequence : " << endl;
    cin >> n;
    int i;
    int b[n];
    b[0] = a;
    for (i = 1; i < n; i++)
    {
        a = a + d;
        b[i] = a;
    }
    cout << "The value at " << n << " position is " << b[n-1];
    return 0;
}