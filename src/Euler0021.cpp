// OBJECTIVE
// Let d(n) be defined as the sum of proper divisors of n.
// If d(a) = b and d(b) = a, where a != b, then a and b are an amicable pair.
// Evaluate the sum of all the amicable numbers under 10000.

#include <iostream>
using namespace std;
int factor1,factor2,result;

int main()
{
    result=0;
    for (int num = 28; num < 10000; num++)//factor function threshold is set to x/2+1 because we should not calculate number itself and decrease execution time
    {
        factor1=factor2=0;
        for (int k = 1; k <(num/2)+1; k++)  //computes num factors sum as factor1  
        {
            if (num%k==0)
                factor1+=k;;
        }
        for (int t = 1; t < (factor1/2)+1; t++)//computes factor1's factors sum as factor2
        {
            if (factor1%t==0)
                factor2+=t;
        }
        if (num==factor2&&num!=factor1)     result+=num;
    }
    cout << result;
}