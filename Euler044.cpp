#include <iostream>
#include <math.h>
using namespace std;
long long int pentagon[10000];
long long int a,b;
bool t=true;
// (3n^2-n)/2=y  1+24y

bool isPentagon(long long x) 
{
    long long s = 1 + 24*x;
    long long root = (long long)(sqrt(s));
    return root*root == s && (1 + root) % 6 == 0;
}

int main() 
{
    for (int i = 1; i < 10001; i++)
    {
        pentagon[i-1]=(3*i*i-i)/2;
    }
    for (int i = 0; i < 10000 && t; i++)
    {
        for (int k = i+1; k < 10000; k++)
        {
            a=pentagon[i]+pentagon[k];b=pentagon[k]-pentagon[i];
            if (isPentagon(a)&&isPentagon(b))
            {
                cout<<pentagon[k]-pentagon[i];
                t=false;
            }            
        }
    }
}
