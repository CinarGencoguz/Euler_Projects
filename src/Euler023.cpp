// OBJECTIVE
// A number n is called abundant if the sum of its proper divisors exceeds n.
// Find the sum of all positive integers which cannot be written as the sum of 
// two abundant numbers (all integers > 28123 can be written as such a sum).

#include <iostream>
using namespace std;
int a, b, c,d,g,f;
int all,orijin;

int main()
{
	f=28123;
	g = 0; b = 0; d = 0;
	int abundant[7000];
	int abundantTotal[30000];
	for (int i = 4; i <= f; i++)
	{
		a = 1;
		for (int k = 2; k <= i/2; k++)
		{
			if (i%k==0)
			{
				a += k;
			}
			if (a>i)
			{
				abundant[b] = i;
				b++;
				a = 1;
				break;
			}
		}
	}
	abundantTotal[0] = abundant[0] + abundant[0];
	d++;
	for (int i = 0; i < b; i++)
	{
		if (abundant[i]>(f+1)/2)
		{
			g = i;
		}
	}
	for (int i = 0; i <=b; i++)
	{
		for (int p = i; p < b; p++)
		{
			c = abundant[i] + abundant[p];
			if (c>f)
			{
				break;
			}
			for (int k = 0; k < d; k++)
			{
				if (c==abundantTotal[k])
				{
					goto finish;
				}
			}
				abundantTotal[d] = c;
				d++;	
			finish:a;
		}
	}
	for (int i = 0; i < d; i++)
	{
		all += abundantTotal[i];
	}
	orijin = (((1 + f) / 2) * f);
	cout <<"orijin :" << orijin << endl;
	cout <<"abundant total : " << all << endl;
	cout <<"result : " << orijin - all<<endl;
}