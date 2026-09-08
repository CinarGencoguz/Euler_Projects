// OBJECTIVE
// Considering quadratics of the form n^2 + an + b (|a| < 1000, |b| <= 1000), find the product of the coefficients 
// a and b that produces the maximum number of primes for consecutive values of n, starting with n = 0.

#include <iostream>
#include <math.h>
#include "../include/MathUtils.hpp"
using namespace std;

int a, b, n ,maxa, maxb, maxn;
int primeNums[200], total,primeCounter;
bool flag;

int main()
{
	primeCounter = 0;
	for (int i = 2; i <=1000; i++) //compute the primes for b that must be prime
	{
		if(Mathutilus::IsPrime(i))		{primeNums[primeCounter]=i;		primeCounter++;}
	}
	for ( b = 0; b <primeCounter; b++)
	{
		for (a = -999; a < 1000; a+=2) // Increments 'a' by 2 because for odd 'b', 'a' must be odd to keep the sum odd for n=1
			n = 0;
			if (a<0)
			{
				if (abs(a*n)>n*n+ primeNums[b])
					flag = false;
				else
					flag = true;
			}
			while (flag)
			{
				total = n * n + n * a + primeNums[b];
				if (!Mathutilus::IsPrime(total))	break; // Breaks the loop if 'total' is not prime
				if (n>maxn)
				{
				maxn = n;
				maxa = a;
				maxb = primeNums[b];
				}
				n++;
			}
		}
	}
	cout << "coefficients =" << maxa * maxb;
}