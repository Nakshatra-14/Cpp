/*
Write a class named String so that the following code runs successfully.

String s ;
s.disp() ;   // prints nothing
String t = "Tarzan" ; // String t("Tarzan")
t.disp() ; // Tarzan
t += "Jane" ;  // t.operator+=("Jane")
t.disp() ; // TarzanJane
s = "Super" ; // s.operator=("Super")
for(int i = 0 ; i < s.length() ; i++)
   cout << s[i] << '-' ;
cout << endl ;
// S-u-p-e-r-

s = ~t ;
s.disp() ; // repuS

String r = s + t ; // String r = s.operator+(t) ;

r.disp() ; // repuSTarzanJane

*/

#include <string.h>
#include <iostream>

using namespace std ;


class String
{
    private :
        char *p ;
        int len ;

    public :
        void set(const char str[])
        {
            len = strlen(str) ;
            p = new char[len+1] ;
            strcpy(p, str) ;
        }   

        String()
        {
            set("") ;
        }

        String(const char str[])
        {
            set(str) ;
        }

        // String(String& h)
        // {
        //     set(h.p) ;
        // }

        ~String()
        {
            delete p ;
        }

        void disp()
        {
            cout << p << endl ;
        }
        String operator+(String& g)
        {
            String temp = p ;
            temp += g.p ;

            return temp ;
        }

        String& operator+=(const char str[])
        {
            len += strlen(str) ;
            char *q = new char[len+1] ;
            strcpy(q, p) ;
            strcat(q, str) ;
            delete p ;
            p = q ;

            return *this ;
        }

        void operator=(const char str[])
        {
            set(str) ;
        }

        int length()
        {
            return len ;
        }

        char operator[](int index)
        {
            return p[index] ;
        }

        // String operator~()
        // {
        //     String tmp = p ;
        //     int f = 0, l = len-1 ;
        //     char m ;
        //     while(f < l)
        //     {
        //         // swap tmp.p[f], tmp.p[l]
        //         m = tmp.p[f] ;
        //         tmp.p[f] = tmp.p[l] ;
        //         tmp.p[l] = m ;

        //         f++ ;
        //         l-- ;
        //     }

        //     return tmp ;
        // }
} ;


int main()
{
    String s ;
    s.disp() ;   // prints nothing
    String t = "Tarzan" ; // String t("Tarzan")
    t.disp() ; // Tarzan
    t += "Jane" ;  // t.operator+=("Jane")
    t.disp() ; // TarzanJane
    s = "Super" ; // s.operator=("Super")
    for(int i = 0 ; i < s.length() ; i++)
        cout << s[i] << '-' ;
    cout << endl ;
    // S-u-p-e-r-

    // String v = "Voldemont" ;
    // s = ~v ;

    s.disp() ; // Super
    t.disp() ; // TarzanJane


    String r = s + t ; // String r = s.operator+(t) ;


    r.disp() ; // repuSTarzanJane

    return 0 ;
}