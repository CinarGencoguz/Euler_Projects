// OBJECTIVE
// If p is the perimeter of a right angle triangle with integral side lengths, {a,b,c}, 
// for which value of p <= 1000, is the number of solutions maximised?

#include <iostream>
#include <math.h>
using namespace std;
int maxNOS, nOS;
double a,result;
// nOS is the number of solutions ,maxNOS is the max number of solutions
// a is hypotenuse , b is shorter side
int main()
{
    for (int p = 2; p < 1000; p++)
    {
        nOS=0;
        for (int b = 2; b < 500; b++) // threshold is 500 because I consider that  b is the shorter side 
        {
            for (int c = b+1; c < 1000-b; c++)// Decreasing the upper bound to reduce execution time
            {
                a=sqrt(b*b+c*c);
                if (a==(int)a&&b+c+a==p) // Program checks whether the hypotenuse is integer or decimal number
                {
                    nOS++;
                    if (nOS>maxNOS)
                    {
                        result=p;
                        maxNOS=nOS;
                    }
                }
            } 
        }   
    } 
    cout << result ;
}
