#include <iostream>
#include <math.h>
using namespace std;
unsigned long long int replica1,replica2,a;
int result,digit;

int FindDigit(int a)
{
    int digit=0;
    while (a>=1)
    {
        a/=10;
        digit++;
    }
    return digit;
}

int main()
{
    result=9999999;
    for (int i = 1; i < 10000000; i++)
    {
        replica1=i; replica2=0;
        while (replica2!=89&&replica2!=145&&replica2!=154&&replica2!=451&&replica2!=415&&replica2!=514&&replica2!=541&&replica2!=58&&replica2!=85)
        {
            replica2=0; digit= FindDigit(replica1);
            for (int k = 0; k < digit; k++)
            {
                a=replica1/pow(10,k); a=a%10;
                replica2+=a*a;
            } 
            if (replica2==1||replica2==31||replica2==23||replica2==44)
            { 
                result--;
                break;
            }
            replica1=replica2;
        }
    }
    cout << endl<<result;
}