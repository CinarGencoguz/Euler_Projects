// OBJECTIVE
// If p is the perimeter of a right angle triangle with integral side lengths, {a,b,c}, 
// for which value of p <= 1000, is the number of solutions maximised?

#include <iostream>
#include <math.h>
using namespace std;
int maxleng, leng;
double a,result;

int main()
{
    for (int i = 2; i < 1000; i++)
    {
        leng=0;
        for (int k = 2; k < 1000; k++)
        {
            for (int t = k+1; t < 1000-k; t++)
            {
                a=sqrt(k*k+t*t);
                if (a==(int)a&&k+t+a==i)
                {
                    leng++;
                    if (leng>maxleng)
                    {
                        result=i;maxleng=leng;
                    }
                }
            } 
        }   
    } 
    cout << result;
}
