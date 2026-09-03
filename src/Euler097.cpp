// OBJECTIVE
// The first known prime found to exceed one million digits was discovered in 1999, 
// and is a Mersenne prime of the form 2^6972593 - 1.
// However, in 2004, a massive non-Mersenne prime was found: 28433 × 2^7830457 + 1.
// Find the last ten digits of this prime number.

#include <iostream>
using namespace std;
unsigned long long int result,mod;

int main()
{
    result=1;mod=10000000000;
    for (int i = 0; i < 7830457; i++)   
    {
        result*=2; result%=mod;
    }
    result*=28433;result%=mod;result+=1;
    cout <<result;
}