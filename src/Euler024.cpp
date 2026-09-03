#include <iostream>
using namespace std;
int Numbers[10];
int Result[10];
int total;
int c, b, Millionth;
int main()
{
	c = 0; b = 9; Millionth = 1000000; total = 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9;
	for (int i = 0; i < 10; i++)
	{
		Numbers[i] = i;
	}
	while (c!=9)
	{
		for (int i = 1; i <= b+1; i++)
		{
			if (total * i >= Millionth)
			{
				Result[c] = Numbers[i-1];
				for (int k = i-1; k < b; k++)
				{
					Numbers[k] = Numbers[k+1];
				}
				c++;
				Millionth -= (i-1 ) * total;
				if (b!=0)
				{
					total /= b;
				}
				b -= 1;
				break;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << Result[i];
	}
}