#include <iostream>
#include <math.h>
using namespace std;
int Numbers[400]={0};
int k=1;
int result=0;

main()
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