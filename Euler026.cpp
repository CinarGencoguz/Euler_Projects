#include <iostream>
#include <math.h>
using namespace std;
unsigned long long int result,num1,num2,num3,k;

void dived(unsigned long long int& a)
{
    while (a%2==0)
    {
        a/=2;
    }
    while (a%5==0)
    {
        a/=5;
    }
}

main()
{
    for (int i = 2; i < 1000; i++)
    {
        num3=i; dived(num3);  k=1; num1=10%num3;
        if(num3 == 1) continue;
        while(num1!=1)
        {
            num1 = (num1 * 10) % num3;
            k++;
        }
        if(k > result) 
        {
            result = k;
            num2 =i;
        }    
    }
    cout << result<<endl<<num2;
}