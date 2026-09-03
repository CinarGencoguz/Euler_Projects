#include <iostream>
#include <string>
using namespace std;
long long int result,num;

int finddigitsum(int i, int k)
{
    int digits[10000]={0};  digits[0]=1;  int num=1;   int sum=0;
    for (size_t t = 0; t < k; t++)
    {
        for (size_t g = 0; g < num; g++)
            digits[g]*=i;
        for (int d = 0; d < num; d++)
        {
            if (digits[d]>=10)
            {
                digits[d+1]+=digits[d]/10;
                digits[d]=digits[d]%10;
                if (num-1==d)
                    num++;
            }
        }
    }
    for (size_t d = 0; d < num; d++)
        sum+=digits[d];
    return sum;
}

main()
{
    result=0;
    for (int i = 2; i < 100; i++)
    {
        for (int k = 2; k < 100; k++)
        {
            num=finddigitsum(i,k);
            if (num>result)
                result=num;
            cout <<i << "     "<<k << "       "<< num<< endl;;
        }
    }
    cout <<result;
}