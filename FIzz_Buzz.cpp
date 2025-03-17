#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome to the world of FIZZ BUZZ" << endl;
    int n;
    cout << "Enter the number till you want to play : " << endl;
    cin >> n;
    int i;
    cout << "[";
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << " FizzBuzz ";
        }
        else if (i % 3 == 0)
        {
            cout << " Fizz ";
        }
        else if (i % 5 == 0)
        {
            cout << " Buzz ";
        }
        else
        {
            cout<<" " << i<<" ";
        }
    }
    cout << "]";
    return 0;
}