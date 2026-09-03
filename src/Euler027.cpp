#include <iostream>
int PrimeD, num1;
int a, b, n , maxn;
int maxa, maxb;
int total,breakable;
using namespace std;

int main()
{
	PrimeD = 0; num1 = 0; n = 1;
	int prime1000[170];
	total = n * n + n * a + prime1000[b];
	for (int i = 2; i <=1000; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			if (i%k==0)
			{
				PrimeD++;
				if (PrimeD>2)
				{
					PrimeD = 0;
					break;
				}
				if (k==i)
				{
					prime1000[num1] = i;
					num1++;
				}
			}
		}
	}
	for ( b = 0; b <num1; b++)
	{
		for (a = -999; a < 1000; a+=2)
		{
			n = 1;
			if (a<0)
			{
				if (abs(a*n)>n*n+ prime1000[b])
					breakable = 1;
				else
					breakable = 0;
			}
			else if (a>=0)
				breakable = 0;
			while (breakable==0)
			{
				total = n * n + n * a + prime1000[b];
				if (total<2)
					break;
				for (int i =1; i <= total; i++)
				{
					if (total%i==0)
					{
						PrimeD++;
						if (PrimeD>2)
						{
							PrimeD = 0; breakable = 1;
							if (n>maxn)
							{
								maxn = n;
								maxa = a;
								maxb = prime1000[b];
								cout << "Maxa = " <<  maxa << endl << "Maxb = " << maxb << endl << "Maxn = " << maxn << endl << endl;
							}
							break;
						}
					}
					if (i == total)
					{
						PrimeD = 0;
						if (n > maxn)
						{
							maxn = n;
							maxa = a;
							maxb = prime1000[b];
							cout << "Maxa = " << maxa << endl << "Maxb = " << maxb << endl << "Maxn = " << maxn << endl<<endl;
						}
						n++;
					}
				}
			}
		}
	}
	cout <<endl<<endl<< "Maxa = " << maxa << endl << "Maxb = " << maxb << endl << "Maxn = " << maxn << endl << endl;
	cout << "coefficients =" << maxa * maxb;
}