#include <iostream>
#include <string.h>

using namespace std ;

class Point
{
    private :
        int x ;
        int y ;

    public :
        Point()
        {
            x = 0 ;
            y = 0 ;
        }

        Point(int x, int y)
        {
//            Point *this = &a ; // how 'this' works like
            this->x = x ;
            this->y = y ;
        }

        void disp()
        {
            cout << '(' << x << ", " << y << ')' << endl ;
        }

        // overloading unary minus
        Point operator-()
        {
            Point temp(-x, -y) ;

            return temp ;
        }

        // overloading binary minus
        Point operator-(Point &t)
        {
            Point temp(x - t.x, y - t.y) ;

            return temp ;
        }


        // overloading prefix operator
        Point operator++()
        {
            x += 10 ;
            y += 10 ;

            return *this ;
        }

        // overloading postfix operator
        Point operator++(int)   // (int) is a fixed syntax for postfix operator
        {
            Point temp(x, y) ;

            x += 10 ;
            y += 10 ;

            return temp ;
        }
} ;

int main(void)
{
    Point a(25, 90) ;
    a.disp() ; // (25, 90)

    Point b = ++a ;  // Point b = a.operator++() ;
    a.disp() ; // (35, 100)
    b.disp() ; // (35, 100)

    Point c = a++ ;   // Point c = a.operator++(int) ;
    a.disp() ; // (45, 110)
    c.disp() ; // (35, 100)

    Point d = -c ; // Point d = c.operator-()
    d.disp() ; //(-35, -100) ;
    d = -d ;
    d.disp() ; //(35, 100) ;

    Point m(23, 56) ;
    Point n(20, 50) ;
    Point r = m - n ; // Point r = m.operator-(n) ;
    r.disp() ; // (3, 6)

}

