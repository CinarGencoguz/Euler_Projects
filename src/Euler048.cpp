// OBJECTIVE
// Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.

#include <iostream>
using namespace std;
int digit[3000]={0};
int Tdigit[3000]={0};
int g;

int main()
{
    Tdigit[0]=g=1;
    for (int i = 1; i <= 1000; i++)
    {
        for (int k = 0; k < i; k++)
        {
            for (int t = 0; t < g; t++)
            {
                Tdigit[t]*=i;
            }
            
        for (int t = 0; t < g; t++)
        {
            if (Tdigit[t]>=10&&t==g-1)
            {
                Tdigit[t+1]+=Tdigit[t]/10;
                Tdigit[t]=Tdigit[t]%10;
                g++;
                break;
            }
            if (Tdigit[t]>=10)
            {
                Tdigit[t+1]+=Tdigit[t]/10;
                Tdigit[t]=Tdigit[t]%10;
            }
        }
        }
        for (int f = 0; f < g; f++)
        {
            digit[f]+=Tdigit[f];
            Tdigit[f]=0;    
        }
        Tdigit[0]=1;
        for (int t = 0; t < g; t++)
        {
            if (digit[t]>=10&&t==g-1)
            {
                digit[t+1]+=digit[t]/10;
                digit[t]=digit[t]%10;
                break;
            }
            if (digit[t]>=10)
            {
                digit[t+1]+=digit[t]/10;
                digit[t]=digit[t]%10;
            }
        } 
    }
    for (int f = 9; f >=0; f--)
    {
        cout << digit[f];
    }
}