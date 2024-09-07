#include <iostream>
#include <string.h>

using namespace std;

class Month
{
    public:
    char *operator[](int n)
    {
        char *m[] = {"January", "Febuary", "march", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        return m[n-1];
    }
    Month operator[](const char name[])
    {
        char *m[] = {"January", "Febuary", "march", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    }
};
int main(void)
{
    Month m[5];
    
}
//m[1]