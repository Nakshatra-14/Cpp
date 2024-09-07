#include <iostream>
#include <string.h>

using namespace std;

class Emp
{
    private:
        char name[30];
        int age;
        float sal;

    public:
        Emp()
        {
            strcpy(name, "<noname>");
            age = 18;
            sal = 10000;
        }

        Emp(char nam[])
        {
            strcpy(name, nam);
            age = 21;
            sal = 20000;
        }
        Emp(char nam[], int ag, float sl)
        {
            strcpy(name, nam);
            age = ag;
            sal = sl;
        }
        // Emp(Emp  x)
        // {
        //     strcpy(name, x.name);
        //     age = x.age;
        //     sal = x.sal;
        // }

        void disp();

};

void Emp::disp()
{
    cout << name << ", " << age << ", " << sal << "\n";
}

int main(void)
{
    Emp e;                          
    Emp g("Gautam");                //no-arg constructor
    Emp m = "Manas";                //one-arg constructor
    Emp p("Piyush", 29, 30000);     //parameterized constructor
    Emp q(m);                       //copy constructor
    Emp r = p;

    e.disp();
    g.disp();
    m.disp();
    p.disp();
    q.disp();
    r.disp();

    return 0;

}