
#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;
public:
    void get_roll(int n) { rollNo = n; }
    void put_roll() { cout << "Roll No: " << rollNo << endl; }
};

class Test : public Student {
protected:
    float sub1, sub2;
public:
    void get_marks() {
        cout << "Enter marks for Subject 1: ";
        cin >> sub1;
        cout << "Enter marks for Subject 2: ";
        cin >> sub2;
    }
    void put_marks() {
        cout << "Marks in Subject 1: " << sub1 << endl;
        cout << "Marks in Subject 2: " << sub2 << endl;
    }
};

class Sports {
protected:
    float sportScore;
public:
    void get_score() {
        cout << "Enter sports score: ";
        cin >> sportScore;
    }
    void put_score() {
        cout << "Sports Score: " << sportScore << endl;
    }
};

class Result : public Test, public Sports {
public:
    void display_results() {
        float total = sub1 + sub2 + sportScore;
        put_roll();
        put_marks();
        put_score();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result students[5];
    for(int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i+1 << ":" << endl;
        students[i].get_roll(i+1);
        students[i].get_marks();
        students[i].get_score();
    }
    cout << "\nResults:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Student " << i+1 << ":" << endl;
        students[i].display_results();
        cout << endl;
    }
    return 0;
}