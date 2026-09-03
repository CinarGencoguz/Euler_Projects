#include <iostream>
#include <math.h>
using namespace std;
int denominator,numerator;
double a,b,c;

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
{//i/k==(i/10)/(k%10)      i/k==(k/10)/(i%10)
    denominator=numerator=1;
    for (int i = 10; i < 100; i++)
    {
        for (int k = 10; k < 100; k++)
        {
            if (i%10==0||k%10==0)
                continue;
            if (i<k)
            {
                if (i%10==k/10||i/10==k%10)
                {
                    if (((double)i/k==(double)(i/10)/(k%10))||((double)i/k==(double)(i%10)/(k/10)))
                    {
                        numerator*=i;denominator*=k;
                        cout << i << "      "<<k<<endl;
                    }
                }  
            }
        }
    }
    for (int i = 2; i < 98; i++)
    {
        if (IsPrime(i)&&numerator%i==0&&denominator%i==0)
        {
            while (numerator%i==0&&denominator%i==0)
            {
                numerator/=i;denominator/=i;
            }
        }
    }
    cout << denominator;
}