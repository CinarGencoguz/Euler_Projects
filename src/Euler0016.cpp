// OBJECTIVE
// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
// What is the sum of the digits of the number 2^1000?

#include <iostream>
#include <math.h>
using namespace std;
int Numbers[400]={0};
int k=1;
int result=0;
// Program stores number digits as integers and first process each digit individually
int main()
{
    Numbers[0]=1;
    for (int t = 0; t < 1000; t++)
    {
        for (int i = 0; i < k; i++)
        {
            Numbers[i]*=2;
        }
        for (int i = 0; i < k; i++)
        {
            while (Numbers[i]>=10)
            {
                if (i==k-1&&Numbers[i]>=10)
                    k++;
                Numbers[i+1]+=Numbers[i]/10;
                Numbers[i]=Numbers[i]%10;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        result+=Numbers[i];
    }
    cout << endl << result;
}