/*
Write a program to print ASSCI chart from value 32 to 256
example:
32      57
33      58
34
...
56
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    // int lb = 32, ub = 256;
    // int n = ub - lb + 1;
    // int cols = 9;
    // int rows = n / cols;
    // int i , j;
    // int r, v;

    // for( i = 0 ; i < rows ; i++)
    // {
    //     v = i * cols  + lb;
    //     for(j = 0 ; j < cols ; j++)
    //     {
    //         cout << v << " " << (char)v <<  "\t";
    //         v++;
    //     }
    //     cout << endl;
    // }

    int lb = 32, ub = 256;
    int n = ub - lb + 1;
    int cols = 27;
    int rows = ceil((float)n / cols);
    int i, j;
    int r, v;

    for (i = 0; i < rows; i++)
    {
        v = lb + i;
        for (j = 0; j < cols; j++)
        {
            // if (v > ub)
            //     goto endOfIloop; //we use it to exit from innermost loop
            if(v > ub)
                break;
            cout << v << " " << (char)v << "\t";
            v += rows;
        }
        cout << endl;
    }
// endOfIloop:

    return 0;
}

// for(int i = 32 ; i <= 56 ; i++)//57 - 32 = 25 | 256
//     {
//         cout << i << "\t" << (char)i << "\t\t";
//         for(int j = 0 ; j < 9 ; j++)
//         {
//             cout << (i+25) << "\t" << (char)(i+25) << "\t\t" << (i+25+25) << "\t" << (char)(i+25+25) << "\t\t" << (i+25+25+25) << "\t" << (char)(i+25+25+25) << "\t\t" << (i+25+25+25+25) << "\t" << (char)(i+25+25+25+25) << "\t\t" << (i+25+25+25+25+25) << "\t" << (char)(i+25+25+25+25+25) << "\t\t" << (i+25+25+25+25+25+25) << "\t" << (char)(i+25+25+25+25+25+25) << "\t\t" << (i+25+25+25+25+25+25+25) << "\t" << (char)(i+25+25+25+25+25+25+25) << "\t\t" << (i+25+25+25+25+25+25+25+25) << "\t" << (char)(i+25+25+25+25+25+25+25+25) << "\t\t" << (i+25+25+25+25+25+25+25+25+25) << "\t" << (char)(i+25+25+25+25+25+25+25+25+25) << "\t\t" << (i+25+25+25+25+25+25+25+25+25+25) << "\t" << (char)(i+25+25+25+25+25+25+25+25+25+25) << "\t\t";
//         }
//         cout << endl;
//     }