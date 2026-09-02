#include <iostream>
using namespace std;
int trash,trash2;
int  primenum;
int fact, L,Lp, R1, R2, R3,R4;
int result,product;

void Fact(int& a, int& b)
{
	for (int i = 1; i <= a; i++)
		b *= i;
	if (b==0)
		b = 1;
}
int main()
{
	int Prime[1150]; int MNum[4]; int TNum[4]; primenum = 0;
	for (int i = 3; i < 1000000; i+=2)
	{
		again:trash2 = i;
		while (trash2 >= 1)
		{
			if (trash2 % 10 == 0 || trash2 % 10 == 2 || trash2 % 10 == 4 || trash2 % 10 == 6 || trash2 % 10 == 8 || trash2 % 10 == 5)
			{
				i++;goto again;
			}
			else
				trash2 /= 10;
		}
		trash = 0;
		for (int k = 1; k <= i; k++)
		{
			if (i%k==0)
			{
				trash++;
				if (trash > 2)
				{
					trash = 0;
					break;
				}
				if (k>i/2+1)
				{
					Prime[primenum] = i;
					primenum++;
				}
			}
		}
	}
	for (int i = 0; i < primenum; i++)
	{
		againn:MNum[0] = MNum[1] = MNum[2] = MNum[3] = 0;
		trash2 = Prime[i]; L =R1=R2=R3=R4= 1;
		while(trash2 >= 1)
		{
			 switch (trash2 % 10)
			 {
			 case 1:MNum[0]++; break;
			 case 3:MNum[1]++; break;
			 case 7:MNum[2]++; break;
			 case 9:MNum[3]++; break;
			 }
			 trash2 /= 10;
		}
		Lp = MNum[0] + MNum[1] + MNum[2] + MNum[3];
		Fact(Lp,L); Fact(MNum[0], R1);	Fact(MNum[1], R2); Fact(MNum[2], R3); Fact(MNum[3], R4);
		fact = L / (R1 * R2 * R3 * R4);	result = 0;
		for (int k = 0; k < primenum; k++)
		{
			TNum[0] = TNum[1] = TNum[2] = TNum[3] = 0; trash = Prime[k];
			while (trash >= 1)
			{
				switch (trash % 10)
				{
				case 1:TNum[0]++; break;
				case 3:TNum[1]++; break;
				case 7:TNum[2]++; break;
				case 9:TNum[3]++; break;
				}
				trash /= 10;
			}
			while (true)
			{
				if (MNum[0] == TNum[0] && MNum[1] == TNum[1] && MNum[2] == TNum[2] && MNum[3] == TNum[3])
				{
					result++;
					if (result==fact)
					{
						product++;	result = 0;
						cout << Prime[i] << endl;
						i++;	goto againn;
					}
					else
						break;
				}
				else
					break;
			}
		}	
	}
	cout <<endl<< product+2;
}