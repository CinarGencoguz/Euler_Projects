#include <iostream>
#include <math.h>
using namespace std;
int a1,primenum,result,leng,maxleng;
int prime[10000];

bool isPrime(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i <= pow(n,0.5); i++)
        if (n % i == 0) 
            return false;
    return true;
}

main()
{
    prime[0]=2;primenum=1;maxleng=result=0;
    for (int i = 3; i <= 100000; i+=2)
    {
        if (isPrime(i)) 
        {
            prime[primenum] = i;
            primenum++;
        }
    }
    for (int i = 0; i < primenum; i++)
    {
        a1=0;
        for (int k = i; k < primenum; k++)
        {
            a1+=prime[k];
            if (a1>1000000)
                break;
            leng= k-i;
            if (leng>maxleng&&isPrime(a1))
            {
                maxleng=leng;
                result=a1;
            }
        }
    }
    cout <<result;
}