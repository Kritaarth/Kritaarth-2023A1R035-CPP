#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the length of 3 sides of triangle : " << endl;
    cin >> a >> b >> c;
    int count = 0;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "The triangle is valid ";
    }
    else
    {
        cout << "Not a valid triangle";
    }
    return 0;
}