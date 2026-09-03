// OBJECTIVE
// Find the sum of all numbers which are equal to the sum of the factorial of their digits 
// (excluding 1! and 2!).

#include <iostream>
using namespace std;
int number[10000];
int num1,num2,num3,num4,total,result;

int Fact(int& a, int& b)
{
	for (int i = 1; i <= a; i++)
		b *= i;
	if (b==0)
		b = 1;
    return b;
}

int main()
{
    num2=result=0;
    for (int i = 145; i < 100000; i++)
    {
        num1=i; total=0;
        while (num1>=1)
        {
            num4=num1%10;num3=1;
            total+=Fact(num4,num3);
            num1/=10;
        }
        if (total==i)
        {
            number[num2]=i;
            cout<< i<< endl;
            num2++;
        }
    }
    for (int i = 0; i < num2; i++)
    {
        result+=number[i];
    }
    cout << result;
}