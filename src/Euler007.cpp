#include <iostream>
using namespace std;
int a1,primenum,i;

main()
{
    i=1;
  while (primenum<10001)
  {
    i++;
    a1=0;
        for (int k = 1; k <= i; k++)
        {
            if (i%k==0)
                a1++;            
            if (a1>2)
                break;
            if (k==i)
                primenum++;
        }
  }
  if (primenum==10001)
    primenum=i;
  cout << primenum;
}
