// OBJECTIVE
// Find the sum of all products whose multiplicand/multiplier/product identity 
// can be written as a 1 through 9 pandigital.

#include <iostream>
using namespace std;
int num1[3], num1a, num2[4], num2a,num3[4],num3a;
int trash, trash2, total;
int resultnums[9], resultnumsa;
int last[500], lasta,result;

int main()
{
	lasta = 0;
	for (int i = 2; i <= 100; i++)
	{
	startf:trash = i; num1a = 0; trash2 = 0;
		while (trash>=1)
		{
			num1[num1a] = trash % 10;
			trash /= 10;
			num1a++;
		}
		for (int t = 0; t < num1a; t++)
		{
			trash2++;
			for (int c = trash2; c < num1a; c++)
			{
				if (num1[t]==num1[c])
				{
					i++; goto startf;
				}
			}
		}
		for (int k = 100; k <= 5000; k++)
		{
		starts:trash = k; num2a = 0; trash2 = 0; num3a = 0;
			if (k > 5000)
				break;
			if (num1a == 1 && k < 1000)
			{
				k=1000; goto starts;
			}
			if (num1a == 2 && k > 1000)
				break;
			while (trash >= 1 )
			{
				num2[num2a] = trash % 10;
				trash /= 10;
				num2a++;
			}
			for (int t = 0; t < num2a; t++)
			{
				trash2++;
				for (int c = trash2; c < num2a; c++)
				{
					if (num2[t]==num2[c])
					{
						k++; goto starts;
					}
				}
			}
			total = i * k;
			if (i*k>10000)
			{
				k++;goto starts;
			}
			while (total >= 1 )
			{
				num3[num3a] = total % 10;
				total /= 10;
				num3a++;
			}
			trash2 = 0;
			for (int t = 0; t < num3a; t++)
			{
				trash2++;
				for (int c = trash2; c < num3a; c++)
				{
					if (num3[t] == num3[c])
					{
						k++;goto starts;
					}
				}
			}
			trash2 = 0; resultnumsa = 0;
			if (num1a+num2a+num3a!= 9)
			{
				k++; goto starts;
			}
			for (int g = 0; g < num1a; g++)
			{
				resultnums[resultnumsa] = num1[g];
				resultnumsa++;
			}
			for (int g = 0; g < num2a; g++)
			{
				resultnums[resultnumsa] = num2[g];
				resultnumsa++;
			}
			for (int g = 0; g < num3a; g++)
			{
				resultnums[resultnumsa] = num3[g];
				resultnumsa++;
			}
			for (int t = 0; t < resultnumsa; t++)
			{
				trash2++;
				for (int c = trash2; c < resultnumsa; c++)
				{
					if (resultnums[t] == resultnums[c])
					{
						k++;
						goto starts;
					}
				}
			}
			for (int d = 0; d < resultnumsa; d++)
			{
				if (resultnums[d]==0)
				{
					k++;
					goto starts;
				}
			}
			cout << i << "   " << k << "    " << k*i<< endl;
			last[lasta] = k * i; lasta++;
		}
	}
	trash2 = 0;
	for (int t = 0; t < lasta; t++)
	{
		trash2++;
		for (int c = trash2; c < lasta; c++)
		{
			if (last[t] == last[c])
			{
				last[t] = 0;
			}
		}
	}
	for (int u = 0; u < lasta; u++)
	{
		result += last[u];
	}
	cout << result;
}