// OBJECTIVE
// Discover the four 2-digit fractions that are non-trivial examples of cancelling digits erroneously, 
// with value less than 1, and find the value of their denominator in lowest terms.

#include <iostream>
#include <math.h>
using namespace std;
double result=1,a,b,c; 

int main()
{//i/k==(i/10)/(k%10)      i/k==(k/10)/(i%10)   Checks if cancelling cross digits yields an equivalent fraction
    for (int i = 10; i < 100; i++)
    {
        for (int k = i+1; k < 100; k++)
        {
            if (i%10==0||k%10==0) continue;
            if (i%10==k/10||i/10==k%10) // Checks whether pay and denominator share a common digit
            {
                if (((double)i/k==(double)(i/10)/(k%10))||((double)i/k==(double)(i%10)/(k/10)))     result=(result/i)*k; // Validates if digit cancelling yields the correct mathematical value
            } 
        }
    }
    cout << result;
}