#include <iostream>
#include <math.h>
using namespace std;
int num1,result;
bool finish;

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

main()
{
    num1=9;
    again:for (int i = 1; i*i*2 < num1; i++)
    {
        if (IsPrime(num1)==true)
        {
            num1+=2; goto again;
        }
        if (IsPrime(num1-2*i*i))
        {
            num1+=2; goto again;
        }
    }
    result=num1;
    cout << result;
}



