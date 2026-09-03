//OBJECTIVE
//What is the largest prime factor of 600851475143 the number ?


#include <iostream>
using namespace std;
int a1 ,primenum=0;
long long int num=600851475143;

main()
{
    int prime[25000];
    for (int i = 2; i <= 50000; i++)
    {
        a1=0;
        for (int k = 1; k <= i; k++)
        {
            if (i%k==0)  a1++;            
            if (a1>2)   break;
            if (k==i)
            {
                prime[primenum]=i;   primenum++;
            }
        }
    }
    for (int i = 0; i < primenum; i++)
    {
        again:if (num%prime[i]==0)
        {
            cout<< prime[i]<<"      " <<num/prime[i]<< endl;
            num/=prime[i];
            if (num%prime[i]==0)
            {
                goto again;
            }  
        }
    }
}