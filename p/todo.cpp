#include <iostream>
#include <string.h>

using namespace std;

class TODO
{
    private:
    char title[30];
    char description[100];
    int complete;

    public:
    TODO()
    {
        complete = 0;
    }
    void set(char tit[], char desp[]) 
    {
        strcpy(title, tit);
        strcpy(description, desp);
       // title = tit;
       // complete = complet;
    }

    void getTitle()
    {
        cout << title << endl;
    }

    void getDescription()
    {
        cout << description << endl;
    }

    void getComplete()
    {
        if(complete)
            cout << "Yes";
        else 
            cout << "No";    
    }

};

int main(void)
{
    TODO *p;
    int n, complete, num = 0;
    char title[30], desp[100], dummy[2];
    cout << "Enter 1 for new task\nEnter 2 for delete task\nEnter 3 for edit task";
    cin >> n;
    if(n == 1)
    {
        cin.getline(dummy, 2);
        //p = new list[30];
        cout << "Enter title: ";
        cin.getline(title, 40);
        cout << "Enter Description";
        cin.getline(desp, 100);
        p = new TODO;
        p -> set(title, desp);
        p -> getTitle();
    }

    return 0;
}