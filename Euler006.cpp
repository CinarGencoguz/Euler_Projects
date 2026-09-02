#include <iostream>
#include <math.h>
using namespace std;
int first ,second,a ;

main()
{
    first= second=a=0;
    for (int i = 1; i <= 100; i++)
    { 
        first+=pow(i,2);
    } 
     for (int i = 1; i <= 100; i++)
    { 
        a+=i;
    } 
    second=pow(a,2);    
    cout << second-first;
}