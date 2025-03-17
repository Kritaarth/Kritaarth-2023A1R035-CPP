#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter value of 1st number : " << endl;
    cin >> num1;
    cout << "Enter value of 2nd number : " << endl;
    cin >> num2;
    // with another variable
    // int temp;
    // temp = num1;
    // num1 = num2;
    // num2 = temp;
    // cout << "1st value is : " << num1 << endl;
    // cout << "2nd value is : " << num2 << endl;

    // without another variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "1st value is : " << num1 << endl;
    cout << "2nd value is : " << num2 << endl;
    return 0;
}