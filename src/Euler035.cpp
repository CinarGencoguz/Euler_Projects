// OBJECTIVE
// How many circular primes (all rotations of the digits are prime) are there below one million?

#include <iostream>
#include <math.h>
#include "../include/MathUtils.hpp"
using namespace std;

int digit,result=0,temp1,temp2,temp3,counter;

int main()
{
	for (int i = 1; i < 1000000; i++)
	{
		if (!Mathutilus::IsPrime(i)) continue;
		digit = log10(i)+1;  counter=0; temp3=i;
		for (size_t t = 0; t < digit; t++)
		{
			temp1=temp3%10; temp2=temp3/10; temp3=temp1*pow(10,digit-1)+temp2; // replace first digit as last digit
			if (!Mathutilus::IsPrime(temp3)) break;
            counter++;
            if (counter == digit)  result++;// Increments count if all rotations are prime
		}
	}
	cout << result;
}