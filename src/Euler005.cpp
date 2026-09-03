// OBJECTIVE
// 2520 is the smallest number that can be divided by each of the numbers 
// from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the 
// numbers from 1 to 20?

#include <iostream>
#include <math.h>
using namespace std;
int a1 ,a2, primenum,result;
int prime[20];

int main()
{
    primenum=1; result =1;
   for (int i = 2; i <= 20; i++)
    {
        a1=0;
        for (int k = 1; k <= i/2+1; k++)
        {
            if (i==2)
            prime[0]=2;
            if (i%k==0)
                a1++;            
            if (a1>1)
                break;
            if (k>i/2)
            {
                prime[primenum]=i;   primenum++;
            }
        }
    }
    for (int i = 0; i < primenum; i++)
    {
        a2=0;
       while (pow(prime[i],a2)<20)
       {
             a2++;
       }
       result*=pow(prime[i],a2-1);
    }
    cout << result;
}