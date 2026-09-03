// OBJECTIVE
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
// we can see that the 6th prime is 13.
// What is the 10,001st prime number?

#include <iostream>
using namespace std;
int a1,primenum,i;

int main()
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
