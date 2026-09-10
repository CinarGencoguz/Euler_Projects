// OBJECTIVE
// A number n is called abundant if the sum of its proper divisors exceeds n.
// Find the sum of all positive integers which cannot be written as the sum of 
// two abundant numbers (all integers > 28123 can be written as such a sum).

#include <iostream>
#include <math.h>
#include <set>
#include <numeric>
#include "../include/MathUtils.hpp"
using namespace std;
int limit =28123,abundantNums[7500],abundantCounter=0,temp,result=0;
set<int> sums;

int main()
{
	for (size_t i = 0; i <= limit; i++)	if (Mathutilus::Isabundant(i)) {abundantNums[abundantCounter]=i, abundantCounter++;}//stores abundant numbers in an array
	for (size_t i = 0; i < abundantCounter; i++)
	{
		for (size_t k = i; k < abundantCounter; k++)//stores different abundant number in a set
		{
			temp=abundantNums[i]+abundantNums[k];
			if(temp>limit)	break;
			sums.insert(temp);
		}
	}
	for (size_t i = 0; i <= limit; i++) result+=i;//calculates sum of first 28173 natural number
	result -= accumulate(sums.begin(), sums.end(), 0);//decrease the set from sum
	cout << result;
}