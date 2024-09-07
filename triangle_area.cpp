// Write a program to input 3 integeral value of a triangle and print its area
#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int a, b, c, f;
    float s, sq;
    cout << "Enter the Sides of the triangle:" << endl
         << "Enter the First side: ";
    cin >> a;
    cout << "Enter the Second side: ";
    cin >> b;
    cout << "Enter the Third side: ";
    cin >> c;
    if (a + b < c || b + c < a || c + a < b)
    {
        cout << "Error, Triangle not possible with this sides" << endl;
    }
    else
    {
        s = (a + b + c) / 2.0;
        s = s * (s - a) * (s - b) * (s - c);
        sq = sqrt(s);
        cout << sq << endl;
    }

    return 0;
}