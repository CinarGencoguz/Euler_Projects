#include <iostream>
#include <math.h>
using namespace std;
int num1,num2;

bool IsPrime(int& a)
{
    for (int i = 2; i <= sqrt(a)+2; i++)
    {
       if (a%i==0)
            return false;
    }
    return true;
}
int Sum(int a)
{
    int sum=0;
    while (a>=1)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}

main()
{
    for (int i = 1001; i < 3400; i+=2)
    {
        for (int k = 2; k < sqrt(i)+2; k++)
        {
            if (i%k==0)
                break;
            if (k>=sqrt(i)+1)
            {
                num1=i+3330;num2=i+6660;
                if (IsPrime(num1)&&IsPrime(num2))
                {
                    if (Sum(i)==Sum(num1)&&Sum(num1)==Sum(num2)&&Sum(num2)==Sum(i))
                    {
                        cout<<i<<num1<<num2<<endl;
                    }
                }
            }
        }
    } 
}