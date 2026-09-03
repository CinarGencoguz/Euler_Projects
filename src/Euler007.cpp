// OBJECTIVE
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
// we can see that the 6th prime is 13.
// What is the 10,001st prime number?

#include <iostream>
#include "../include/MathUtils.hpp"
using namespace std;
int primeCounter=0,primeNumber;

int main()
{
    primeNumber=1;
    while (primeCounter<10001)
    {
        primeNumber++;
        if (Mathutils::IsPrime(i))
        {
            primeCounter++;
        } 
    }
  cout << primeNumber;
}
