// OBJECTIVE
// Which prime, below one million, can be written as the sum of the most consecutive primes?

#include <iostream>
#include <math.h>
#include "../include/MathUtils.hpp"
using namespace std;
int result=0,counter=0,i=1,temp,length=0,maxLength=0;
int prime[1000];

int main()
{
    while (result<1000000) // function stores prime numbers whose sums larger than one million
    {
        if (Mathutilus::IsPrime(i))    {prime[counter]=i;   counter++;    result+=i;}
        i++;
    }
    for (size_t t = 0; t < counter; t++)//program start to sum at first integer till product goes beyond one million and start second integer
    {
        temp=0; length=0;
        for (size_t k = t; k < counter; k++)
        {
            temp+=prime[k];
            length++;
            if (temp>1000000&&Mathutilus::IsPrime(temp-prime[k])&&length>maxLength) // checks number satisfies all conditions or dont
            {
                maxLength=length;
                result=temp-prime[k];
                break;
            }
        }
    }
    cout << result;
}