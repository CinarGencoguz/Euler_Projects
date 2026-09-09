// OBJECTIVE
// Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.

#include <iostream>
using namespace std;
long long int result=0,temp,mod=10000000000;//
int main()
{
    for (size_t i = 1; i <= 1000; i++) // start at 1 because I already declared first multiplication as temp=i
    {
        temp=i;
        if(i%10==0) continue;//eliminate multiple of 10 , as an exapmle 10^10 has 11 digits and last 10 digit are all zeros 
        for (size_t k = 1; k < i; k++)  temp=((temp*i))%mod;//processing modulus prosedure prevents overflow
        result=(result+(temp%mod))%mod;
    }
    cout << result;
}