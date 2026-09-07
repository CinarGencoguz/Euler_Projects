// OBJECTIVE
// 2520 is the smallest number that can be divided by each of the numbers 
// from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the 
// numbers from 1 to 20?

#include <iostream>
#include <math.h>
using namespace std;
int result=1,temp1;
int prime[8]={2,3,5,7,11,13,17,19}; // Problem requires up to 20 if we need to generalize the program we requires to include a prime finder as a function

int main()
{
    for (size_t i = 0; i < 8; i++)//program based on prime numbers. As I thought we need to find 20's highest prime powers for smallest result 
    {
        temp1=1;
        while (temp1*prime[i]<20)
        {
            temp1*=prime[i]; 
            result*=prime[i];
        }
    }    
    cout << result;
}