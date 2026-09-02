#include <iostream>
#include <math.h>
using namespace std;
long long int i,sum;

// (3n^2-n)/2=y  1+24y
bool isPentagon(long long x) 
{
    long long s = 1 + 24*x;
    long long root = (long long)(sqrt(s) + 0.5);
    return root*root == s && (1 + root) % 6 == 0;
}
// (2n^2-n)=y  b^2-4ac    1+8y
bool ishexagon(long long x) 
{
    long long s = 1 + 8*x;
    long long root = (long long)(sqrt(s) + 0.5);
    return root*root == s && (1 + root) % 6 == 0;
}

main()
{
    i =286;
    while (true)
    {
        sum=(i*i+i)/2;
        if (ishexagon(sum)&&isPentagon(sum))
        {
            cout <<sum;
            break;
        }
        i++;
    }
}