#include <iostream>
using namespace std;

class SHAPE {
protected:
    double dim1, dim2;
public:
    void get_data(double d1, double d2) {
        dim1 = d1;
        dim2 = d2;
    }
    virtual void display_area() = 0; // Pure virtual function
};

class TRIANGLE : public SHAPE {
public:
    void display_area() {
        double area = 0.5 * dim1 * dim2;
        cout << "Area of Triangle: " << area << endl;
    }
};

class RECTANGLE : public SHAPE {
public:
    void display_area() {
        double area = dim1 * dim2;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    SHAPE *shape;
    TRIANGLE tri;
    RECTANGLE rect;
    int choice;
    double d1, d2;

    cout << "Enter 1 for Triangle or 2 for Rectangle: ";
    cin >> choice;
    cout << "Enter dimensions (e.g., base and height for triangle, length and breadth for rectangle): ";
    cin >> d1 >> d2;

    if (choice == 1) {
        shape = &tri;
    } else {
        shape = &rect;
    }

    shape->get_data(d1, d2);
    shape->display_area();

    return 0;
}