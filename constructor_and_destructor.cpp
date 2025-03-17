#include <iostream>
using namespace std;
class pro
{
public:
    pro()
    {
        cout << "Welcome to the programm" << endl;
    }
    pro(string name)
    {
        cout << "Your name is : " << name << endl;
    }
    ~pro()
    {
        cout << "Memory has been disallocated" << endl;
    }
};
int main()
{
    pro user("Harman");
    return 0;
}