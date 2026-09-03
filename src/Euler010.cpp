#include <iostream>
#include <math.h>
using namespace std;
int  total;
bool IsPrime;

main()
{
    long long total=2;
    for (int i = 3; i <= 2000000; i+=2)
    {
        IsPrime= true;
        for (int k = 2; k <= pow(i,0.5)+1; k++)
        {
            if (i%k==0)
            {
                IsPrime= false;
                break; 
            }
        }
         if (IsPrime)
              total+=i;
    }
    cout << total;
}