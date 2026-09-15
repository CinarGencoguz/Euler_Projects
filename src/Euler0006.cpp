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
int sqrSum,sumSqr ; // sqrSum is sum of all square firt 100 natural number           
                    // sumSqr is square of sum of first 100 natural number
int main()
{
    sqrSum= sumSqr=0;
    for (int i = 1; i <= 100; i++)
    { 
        sqrSum+=pow(i,2);
    } 
     for (int i = 1; i <= 100; i++)
    { 
        sumSqr+=i;
    } 
    sumSqr=pow(sumSqr,2);    
    cout << sumSqr-sqrSum;
}