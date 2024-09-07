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
        void set(char nm[], int ag, float sal)
        {
            strcpy(name, nm);
            age = ag;
            this -> sal = sal;
        }

        int getAge()
        {
            return age;
        }

        float getSal()
        {
            return sal;
        }

        void setSal(float sl)
        {
            sal = sl;
        }

        void disp();
};

void Emp::disp()
{
    cout << name << ", " << age << ", " << sal << "\n";
}

int main(void)
{
    Emp ar[30], e;
    char name[20];
    int n, i, age, sal;

    cout << "Enter no. of emp: ";
    cin >> n;

    for(i = 0 ; i < n ; i++)
    {
        cout << "Employe" << i+1 << ":-" << endl;
       cout << "\tname: ";
       cin.get(); 
       cin.getline(name, 20);
       cout << "\tage: "; 
       cin >> age;
       cout << "\tsalary: "; 
       cin >> sal;

       ar[i].set(name, age, sal);
    }

    for(i = 0 ; i < n - 1 ; i++)
    {
        for(int j = i + 1;  j < n ; j++)
        {
            if(ar[i].getSal() < ar[j].getSal())
            {
            //swap ar[i], ar[j];
            Emp temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            }
        }
        for(i = 0 ; i < n ; i++)
        {
            ar[i].disp();
        }
    }
    return 0;
}