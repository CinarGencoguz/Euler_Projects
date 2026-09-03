// OBJECTIVE
// Starting in the top left corner of a 2x2 grid, and only being able to move 
// to the right and down, there are exactly 6 routes to the bottom right corner.
// How many such routes are there through a 20x20 grid?

#include <iostream>
#include <math.h>
using namespace std;
int num1[20],num2[20],primenum[8];
int prime[9]={2,3,5,7,11,13,17,19};
long long int product;

int main()
{
    for (int i = 0; i < 20; i++)
    {
        for (int k = 21; k <= 40; k++)
        {
            num1[i]=k;num2[i]=i+1;i++;
        } 
    }
    for (int i = 0; i < 20; i++)
    {
           for (int k = 0; k < 8; k++)
           {
                while(num1[i]%prime[k]==0)
                {
                    num1[i]/=prime[k];
                    primenum[k]++;
                }
                 while(num2[i]%prime[k]==0)
                {
                    num2[i]/=prime[k];
                    primenum[k]--;
                }
           }
    }
    product=1;
    for (int i = 0; i < 8; i++)
    {
        product=product*pow(prime[i],primenum[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        product*=num1[i];
    }
    cout<< product;
}