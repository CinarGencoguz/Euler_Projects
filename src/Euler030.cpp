// OBJECTIVE
// Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.

#include <iostream>
#include <math.h>
using namespace std;
int total,temp,result;

int main()
{
    num2=0;result=0;
    for (int i = 100; i < 1000000; i++) //I ketp between 100 and 1000000 because of 6* 9^5 = 354294 that means it can not have more than 6 digit
    {
        total=0;temp=i;
        while (temp>=1)
        {
            total+=pow(temp%10,5); 
            temp/=10;
        }
        if (total==i)   result+=i;
    } 
    cout<< result;
}