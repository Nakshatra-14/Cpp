#include <iostream>
using namespace std;

int& add(int p, int q)
{
    int r;
    r = p + q;
    return r;
}

int main(void)
{
    int a = 3, b = 5;
    int c = add(a, b);
    cout << c << endl;
}