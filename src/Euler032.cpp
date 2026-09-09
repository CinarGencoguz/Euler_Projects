// OBJECTIVE
// Find the sum of all products whose multiplicand/multiplier/product identity 
// can be written as a 1 through 9 pandigital.

#include <iostream>
#include <math.h>
#include <set>
using namespace std;
int result,num,temp,d;

bool digitCounter(int a, int b, int c,int& d)
{
	set<int> digits;
    int temp;
	while (a>=1)		{temp = a%10; digits.insert(temp);	a/=10;if(temp==0) return false ;}
	while (b>=1)		{temp = b%10;digits.insert(temp);	b/=10;if(temp==0) return false ;}
	while (c>=1)		{temp = c%10;digits.insert(temp);	c/=10;if(temp==0) return false ;}
    d=digits.size();
	if (digits.size()!=9)	return false;
	return true;
}

int main()
{
	for (size_t i = 1; i < 100; i++)
	{
		for (size_t t = 100; t < 10000; t++)
		{
			num=i*t; temp=(int)log10(num)+1;
			if (temp!=4) continue;
			if(digitCounter(i,t,num,d)) cout << d << "    "<< num << endl;
            
		}
	}
	
	cout << result;
}