// OBJECTIVE
// Find the first four consecutive integers to have four distinct prime factors each. 
// What is the first of these numbers?

#include <iostream>
#include <math.h>
#include <set>
using namespace std;
int mainnum,num1,num2,num3,num4;
int Primes[200000],primenum;

bool IsPrime(int a)
{
    for (size_t i = 3; i <= sqrt(a)+1; i++)
    {
        if(a < 2) return false;
        if(a == 2) return true;
        if(a % 2 == 0) return false;
        if (a%i==0)
            return false;
    }
    return true;
}

int PrimeCounter(int a)
{
    set <int> big;
    int num=0;
    while (a>1)
    {
        if (a%Primes[num]==0)
        {
            big.insert(Primes[num]);
            a/=Primes[num];
            if (a%Primes[num]==0)
            {
                continue;
            }
        }  
        num++;
    }
    return big.size();
}

int main()
{
    primenum=1;Primes[0]=2;mainnum=1001;
    for (int i = 3; i < 150000; i++)
    {
        if (IsPrime(i))
        {
            Primes[primenum]=i;
            primenum++;
        }
    }
    while (true)
    {
        num1=mainnum;num2=mainnum+1;num3=mainnum+2;num4=mainnum+3;
        if (PrimeCounter(num1)==PrimeCounter(num2)&&PrimeCounter(num2)==PrimeCounter(num3)&&PrimeCounter(num3)==PrimeCounter(num4)
    &&PrimeCounter(num4)==4)
        {
            cout<< mainnum;
            break;
        }
        mainnum++;
    }
}