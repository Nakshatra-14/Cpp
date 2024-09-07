// Write a program to input coordinates of two points and prints the distance between them
#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    float x1, x2, y1, y2, n, a, b, i, j;
    cout << "For first coordinate: " << endl << "X1 = ";
    cin >> x1;
    cout << "Y1 = ";
    cin >> y1;
    cout << "For second coordinate: " << endl << "X2 = ";
    cin >> x2;
    cout << "Y2 = ";
    cin >> y2;
    i = x1-x2;
    j = y1-y2;
    a = (i) * (i);
    b = (j) * (j);
    n = sqrt(a + b);
    cout << n << endl;
    return 0;
}