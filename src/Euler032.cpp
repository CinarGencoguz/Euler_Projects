// OBJECTIVE
// Find the sum of all products whose multiplicand/multiplier/product identity 
// can be written as a 1 through 9 pandigital.

#include <iostream>
#include <math.h>
#include <set>
#include <numeric>
using namespace std;
int result,num,temp;
set <int> numbers;

bool digitCounter(int a, int b, int c) //  checks each element's digits and stores them
{
	set<int> digits;
    int temp;
	while (a>=1)	{temp = a%10; digits.insert(temp);	a/=10;if(temp==0) return false ;}
	while (b>=1)	{temp = b%10;digits.insert(temp);	b/=10;if(temp==0) return false ;}
	while (c>=1)	{temp = c%10;digits.insert(temp);	c/=10;if(temp==0) return false ;}
	if (digits.size()!=9)	return false;
	return true;
}

int main()
{
	for (size_t i = 1; i < 100; i++)
	{
		for (size_t t = 100; t < 10000; t++)
		{
			num=i*t; 
			temp=(int)log10(num)+1; // computes digit by using log10 (formula -> log10(x)+1 integer part is number of digits)
			if (temp>4) continue;
			if(digitCounter(i,t,num)) {numbers.insert(num); cout << num << endl;} // stores in set to prevent duplicate entries
		}
	}
	result = accumulate(numbers.begin(),numbers.end(), 0); // sums all elements of set
	cout << endl<<result;
}