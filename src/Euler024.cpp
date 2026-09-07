// OBJECTIVE
// A permutation is an ordered arrangement of objects. The lexicographic 
// permutations of 0, 1 and 2 are: 012, 021, 102, 120, 201, 210.
// What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?

#include <iostream>
#include "../include/MathUtils.hpp"
using namespace std;
int Numbers[10]={0,1,2,3,4,5,6,7,8,9};
int Result[10];
int total,  digits, Millionth;
int main()
{
	digits = 9; Millionth = 1000000; total = Mathutilus::Factoriel(9); 
	while (digits!=0)
	{	
		for (int i = 0; i <= digits+1; i++)//program finds digits by checking permutation
		{
			if (total * i >= Millionth)
			{
				Result[9-digits] = Numbers[i-1];
        		for (int k = i-1; k < digits; k++)     Numbers[k] = Numbers[k+1]; //Removes used digit by shifting remaining elements left
				Millionth -= (i-1 ) * total;                                      // Subtracts skipped permutations from target index
				if (digits!=0)     total /= digits; 							  //Reduces factorial packet size for the next position
				digits -= 1;
				break;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++)	cout << Result[i];
}