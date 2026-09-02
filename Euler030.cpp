#include <iostream>
#include <set>
#include <math.h>
using namespace std;
int total,num1,num2,result;
int  powers[1000];

main()
{
    num2=0;result=0;
    for (int i = 100; i < 1000000; i++)
    {
        total=0;num1=i;
        while (num1>=1)
        {
            total+=pow(num1%10,5);
            num1/=10;
        }
        if (total==i)
        {
            powers[num2]=i;
            num2++;
        }  
    }
    for (int i = 0; i < num2; i++)
        result+=powers[i];  
    cout<< result;
}