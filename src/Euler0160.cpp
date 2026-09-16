#include <iostream>
using namespace std;

unsigned long long int result=0;
const unsigned long long int mod =1307674368000;


inline long long int modPow(long long int base, unsigned long long int pow,long int mod) // power simplify function
    {
    long long int res = 1;
    base %= mod; 
    while (pow > 0)  // get  it's power 1 time and process modulus which prevents overflow
    {
        if (pow % 2 == 1)          
        res = (res * base) % mod; 
        base = (base * base) % mod;   
        pow = pow / 2;              
    }
    return res;
    }

int main()
{
    for ( int i = 1; i < 100; i++)
    {
        result+=modPow(i,i,mod);
    }
}