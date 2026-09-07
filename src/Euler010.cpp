// OBJECTIVE
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

#include <iostream>
#include <math.h>
#include "../include/MathUtils.hpp"
using namespace std;
int  result;

int main()
{
    for (int i = 1; i <= 2000000; i++)
    {
         if (Mathutils::IsPrime(i))
        {
            result+=i;
        }
    }
    cout << result;
}