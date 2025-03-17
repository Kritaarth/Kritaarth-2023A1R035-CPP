#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms you want in sequence : " << endl;
    cin >> n;
    int i;
    int sum = 1;
    cout << "The sequence is : " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << sum << " ";
        sum = sum + (i + 1);
    }
    return 0;
}