// OBJECTIVE
// The sum of the squares of the first ten natural numbers is 
// 1^2 + 2^2 + ... + 10^2 = 385.
// The square of the sum of the first ten natural numbers is 
// (1 + 2 + ... + 10)^2 = 55^2 = 3025.
// Hence the difference between the sum of the squares of the first ten natural numbers 
// and the square of the sum is 3025 - 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural 
// numbers and the square of the sum.

#include <iostream>
#include <math.h>
using namespace std;
int first ,second,a ;

int main()
{
    first= second=a=0;
    for (int i = 1; i <= 100; i++)
    { 
        first+=pow(i,2);
    } 
     for (int i = 1; i <= 100; i++)
    { 
        a+=i;
    } 
    second=pow(a,2);    
    cout << second-first;
}