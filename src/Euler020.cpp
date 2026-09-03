// OBJECTIVE
// 10! = 10 × 9 × ... × 1 = 3628800, and the sum of the digits in 10! 
// is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
// Find the sum of the digits in the number 100!

#include <iostream>
using namespace std;

int Numbers[10000],k,result;

int main()
{
    Numbers[0]=k=1; result=0;
    for (int t = 2; t <= 100; t++)
    {
        for (int i = 0; i < k; i++)
        {
            Numbers[i]*=t;
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