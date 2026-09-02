// OBJECTIVE
// Find the sum of all even-valued terms in the Fibonacci sequence whose values do not exceed four million (4,000,000).


#include <iostream>
using namespace std;
int fibo[40]={};
int sum=0;


int main()
{
  fibo[0]=1;   fibo[1]=2;
  for (int i = 2; i < 40; ++i)   fibo[i] = fibo[i - 1] + fibo[i - 2]; // fibonacci sequence
  for (int i = 0; i< 40; i++)   if(fibo[i]%2==0 && fibo[i]<4000000 )  sum+=fibo[i];
  cout << sum;
}