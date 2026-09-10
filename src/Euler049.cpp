// OBJECTIVE
// The 4-digit part (1487, 4817, 8147) forms an arithmetic sequence of prime numbers 
// where each term is a permutation of the others.
// What 12-digit number do you form by concatenating the three terms in the other 4-digit sequence?

#include <iostream>
#include <math.h>
#include <algorithm>
#include "../include/MathUtils.hpp"
using namespace std;
int num1,num2;

bool digitComparer(int a,int b)//compares all number digits
{
    int digits1[4],digits2[4],digits3[4];
    int temp1=a+b,temp2=a+b*2; bool flag=true;;
    for (size_t i = 0; i < 4; i++)  { digits1[i]=a%10;    a/=10; }
    for (size_t i = 0; i < 4; i++)  { digits2[i]=temp1%10;    temp1/=10; }
    for (size_t i = 0; i < 4; i++)  { digits3[i]=temp2%10;    temp2/=10; }
    std::sort(digits1, digits1 + 4); std::sort(digits2, digits2 + 4);  std::sort(digits3, digits3 + 4);
    for (size_t i = 0; i < 4; i++)  if (digits1[i]!=digits2[i] || digits1[i]!=digits3[i]) return false;
    return flag;
}

int main()
{
    for (int i = 1001; i < 3300; i+=2)
    {
        if (!Mathutilus::IsPrime(i)) continue;
        for (size_t k = 100; k < 3400; k+=2)
        {
            if (!Mathutilus::IsPrime(i+k)||!Mathutilus::IsPrime(i+2*k)) continue;
            if (Sum(i,k))    cout<<i<<i+k<<i+2*k<<endl;
        }
    } 
}