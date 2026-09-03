// OBJECTIVE
// Find the sum of all numbers which are equal to the sum of the factorial of their digits 
// (excluding 1! and 2!).

#include <iostream>
#include "../include/MathUtils.hpp"
using namespace std;
int temp,digit,total,result=0;


int main()
{
    for (int i = 145; i < 100000; i++)
    {
        temp=i; total=0;
        while (temp>=1)
        {
            digit=temp%10;
            total+=Mathutils:Factoriel(digit);
            temp/=10;
        }
        if (total==i)   result+=i;
    }
    cout << result;
}