//OBJECTIVE
//What is the largest prime factor of 600851475143 the number ?


#include <iostream>
#include "../include/MathUtils.hpp"
using namespace std;
int primeCounter=0;
long long int num=600851475143;

int main()
{
    int prime[25000];
    for (int i = 2; i <= 50000; i++)
    {
        if (Mathutils:IsPrime(i))
        {
            primeCounter++;
        }
        
    }
    for (int i = 0; i < primeCounter; i++)
    {
        while(num%prime[i]==0)
        {
            cout<< prime[i]<<"      " <<num/prime[i]<< endl;
            num/=prime[i];
        }
    }
}