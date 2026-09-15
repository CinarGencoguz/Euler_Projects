// OBJECTIVE
// It is possible to show that the square root of two can be expressed as an infinite continued fraction.
// √2 = 1 + 1/(2 + 1/(2 + 1/(2 + ...)))
// 
// By expanding this for the first four iterations, we get:
// 1 + 1/2 = 3/2 = 1.5
// 1 + 1/(2 + 1/2) = 7/5 = 1.4
// 1 + 1/(2 + 1/(2 + 1/2)) = 17/12 = 1.41666...
// 1 + 1/(2 + 1/(2 + 1/(2 + 1/2))) = 41/29 = 1.41379...
// 
// The next three expansions are 99/70, 239/169, and 577/408, but the eighth expansion, 1393/985,
// is the first example where the number of digits in the numerator exceeds the number of digits in the denominator.
// 
// In the first one thousand expansions, how many fractions contain a numerator with more digits than the denominator?
#include <iostream>
#include <string>
#include <algorithm>
#include "../include/MathUtils.hpp"
using namespace std;
string denominator="2", numerator="3",temp1,temp2;
int result=0;


//consider 3/2 first element and second element is 7/5 and we can build a formula F2 numerator = F1 denominatorx2 + F1 numerator ,F2 denominator = F1 denominator + F1 numerator 
int main()
{
    for (size_t i = 0; i < 1000; i++)
    {
        temp1 = Mathutilus::addString(numerator,denominator);//calculates next element as string to prevent overflow
        temp2 = Mathutilus::addString(temp1,denominator);
        denominator=temp1; numerator=temp2;
         
        if (numerator.size()> denominator.size())   {result++;}//checks number of digits
    }
    cout << result;
}

