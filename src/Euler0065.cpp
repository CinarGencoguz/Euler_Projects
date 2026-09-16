// OBJECTIVE
// The square root of 2 can be written as an infinite continued fraction.
// The sequence of convergents for e yields a pattern in its sequence of terms:
// e = [2; 1, 2, 1, 1, 4, 1, 1, 6, 1, ... , 1, 2k, 1, ...]
// The 10th convergent is 1457/536. The sum of digits in the numerator is 1 + 4 + 5 + 7 = 17.
// Find the sum of digits in the numerator of the 100th convergent of the continued fraction for e.
#include <iostream>
#include <string>
#include <algorithm>
#include "../include/MathUtils.hpp"
using namespace std;
string denominator[100],numerator[100];
int multiply,result=0;

int main()
{
    // Base cases: 1st convergent (2/1) and 2nd convergent (3/1)
    denominator[0]="1"; numerator[0]="2";
    denominator[1]="1"; numerator[1]="3";
    // Recurrence relation for convergents: p_n = a_n * p_{n-1} + p_{n-2}
    for (int i = 2; i < 100; i++)
    {
        multiply=1;
        // Coefficient sequence for e: [2, 1, 2, 1, 1, 4, 1, 1, 6, ...] where 2k appears every 3 steps (when (i+1)%3 == 0)
        if((i+1)%3==0) multiply=(i+1)*2/3; 
        numerator[i]=Mathutilus::addString(Mathutilus::multiplyString(numerator[i-1],multiply),numerator[i-2]);
        denominator[i]=Mathutilus::addString(Mathutilus::multiplyString(denominator[i-1],multiply),denominator[i-2]);
    }
    for (int i = 0; i < numerator[99].size(); i++)  result+= numerator[99][i] - '0';//sum of digits
    cout << result ;
}