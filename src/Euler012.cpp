#include <iostream>
using namespace std;
int num,num1,dive,result,a1,t;
int prime[1000],primenum;
bool able=true;

main()
{
    for (int i = 2; i <= 3000; i++)
    {
        a1=0;
        for (int k = 1; k <= i; k++)
        {
            if (i%k==0)
                a1++;            
            if (a1>2)
                break;
            if (k==i)
            {
                prime[primenum]=i;   primenum++;
            }
        }
    }
    num=50;
while (able)
{
   num++; num1=0;
    for (int i = 1; i <= num; i++)
    {
       num1+=i;
    }
    dive=1; result=num1;
    for (int k = 0; k < primenum; k++)
    {
        if (num1==1)
            break;
        t=1;
       again:if (num1%prime[k]==0)
       {
        num1/=prime[k];
        t++;
        goto again;
       }
       dive*=t;
       if (dive>=500)
       {
        able = false;
        break;
       }
    }
}
cout << result;
}