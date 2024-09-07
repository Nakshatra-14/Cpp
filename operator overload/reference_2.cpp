#include <iostream>
using namespace std;

int& max(int &p, int &q)
{
    if(p>q)
        return p;
    else 
        return q;    
}

int main(void)
{
    int a = 3, b = 5;
    int &c = max(a, b);
    c = 100;
    cout << c << endl;
    // max(a, b) = 100;
    cout << a << ", " << b << endl;
}