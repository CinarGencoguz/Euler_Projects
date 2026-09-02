#include <iostream>
using namespace std;
int b=1; int a=1;int c;int sum=0;

main()
{
  while (a < 4000000) 
  {
    c = a + b;
    a = b;
    b = c;
    if (a%2==0)
        sum+=a;
  }
    cout << sum;
}