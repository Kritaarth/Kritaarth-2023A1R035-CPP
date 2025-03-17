#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x1, x2, y1, y2;
    cout << "Enter the x1 and x2 co-oridnates : " << endl;
    cin >> x1 >> x2;
    cout << "Enter the y1 and y2 co-ordinates : " << endl;
    cin >> y1 >> y2;
    float distance;
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "The distance between the coordinates (" << x1 << "," << x2 << ") and (" << y1 << "," << y2 << ") is : " << distance << endl;
    return 0;
}