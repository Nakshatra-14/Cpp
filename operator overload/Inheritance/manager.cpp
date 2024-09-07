#include <iostream>
#include <string.h>
using namespace std;

class Human
{
    private:
    char name[30];
    int age;

    public:

    void set(const char *nam, int ag)
    {
        strcpy(name, nam);
        age = ag;
    }

    Human()
    {
        set("<noname>", 16);
    }

    Human(const char *nam, int ag)
    {
        set(nam, ag);
    }

    void disp()
    {
        cout << name << ", " << age << endl;
    }
    
};

class Emp : Human
{
    private:
    float sal;

    public:
    Emp()
    {
        sal = 10000;
    }

    Emp(const char *nam, int ag, float sl) : Human(nam, ag)
    {
        sal = sl;
    }

    float getSal()
    {
        return sal;
    }
    
    void disp()
    {
        Human::disp();
        cout << ", " << sal << endl;
    }
};

class Manager : Emp
{
    private:
    char dept[30];

    public:
    void setDept(const char *dp)
    {
        strcpy(dept, dp);
    }

    Manager()
    {
        setDept("<no-department>");   
    }

    Manager(const char *nam, int ag, float sl, const char *dp):Emp(nam, ag, sl)
    {
        strcpy(dept, dp);
    }

    char *getDept()
    {
        return dept;
    }

    void disp()
    {
        Emp::disp();
        cout << ", " << dept << endl;
    }
};

int main(void)
{
    Human h1;
    h1.disp();

    Emp e1;
    e1.disp();

    Manager m1;
    m1.disp();

    Human h2("Hemant", 18);
    h2.disp();

    Emp e2("Emily", 20, 20000);
    e2.disp();

    Manager m2("Manas", 30, 50000, "sales");
    m2.disp();

    return 0;
}