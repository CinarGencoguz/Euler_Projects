#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int a,i,digit;
unsigned long long int num1,num2,trash,result;

bool IsPrime(int a)
{
    if(a < 2) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    for (size_t i = 3; i <= sqrt(a)+1; i++)
    {
        if (a%i==0)
            return false;
    }
    return true;
}

bool IsPalidromInt(unsigned long long int a,int digit)
{
    string x =to_string(a);
    for (int i = 0; i < digit/2; i++)
    {
        if (x[i]!=x[digit-(i)])   return false;
    }
    return true;
}

int main()
{
    a=result=0;i=11;
    while(a!=50)
    {
        if(!IsPrime(i)) {i++; continue;}
        num1=i;num1*=i; digit=(int)log10(num1); num2=0;
        for (int t = 0; t <= digit; t++)
        {
            trash=num1/pow(10,t); trash%=10; trash*=pow(10,digit-t);
            num2+=trash;
        }
        IsPalidromInt(num2,digit);
        trash=sqrt(num2);
        if (IsPrime(trash)&& num2==trash*trash&&!IsPalidromInt(num2,digit))
        {
            a++; cout <<num1<<   "       "<< i<< endl;
            result+=num1;
        }
        i+=2;
    }
    cout <<result;
}