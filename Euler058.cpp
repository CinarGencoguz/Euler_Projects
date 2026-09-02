#include <iostream>
#include <math.h>
using namespace std;
long long int edge,corner,primecorner;
double total;
long int nums[3];

bool IsPrime(int a)
{
    if(a < 2) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    for (size_t i = 3; i <= sqrt(a)+1; i+=2)
    {
        if (a%i==0)
            return false;
    }
    return true;
}

int main()
{
    edge=1; corner=1; primecorner=0;
    while (true)
    {
        nums[0]=(edge*edge)-(edge-1); nums[1]=(edge*edge)-2*(edge-1); nums[2]=(edge*edge)-3*(edge-1);
        for (int i = 0; i < 3; i++)
            if (IsPrime(nums[i])) primecorner++; 
        total=(double)primecorner/corner;
        if (total<=0.1&&primecorner!=0)
        {
            cout << edge; break; 
        }  
        edge+=2; corner+=4;
    }
}