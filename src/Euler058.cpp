// OBJECTIVE
// Starting with 1 and spiralling anticlockwise in the following way, a square spiral with side length 7 is formed.
// If one adds the ratio of prime numbers along both diagonals, we find that 8/13 ≈ 61.5%.
// If one continues the spiral, for what side length of the square spiral does the ratio of primes 
// along the diagonals first fall below 10%?

#include <iostream>
#include <math.h>
#include "../include/MathUtils.hpp"
using namespace std;

int edge=1,corner=1,primecorner=0;
double total;
long int nums[3];

int main()
{
    while (true)
    {
        nums[0]=(edge*edge)-(edge-1); nums[1]=(edge*edge)-2*(edge-1); nums[2]=(edge*edge)-3*(edge-1);
        for (int i = 0; i < 3; i++) if (Mathutilus::IsPrime(nums[i])) primecorner++; 
        total=(double)primecorner/corner;
        if (total<=0.1&&primecorner!=0)
        {
            cout << edge; break; 
        }  
        edge+=2; corner+=4;
    }
}

//   21 22 23 24 25
//   20  7  8  9 10          consider we are taking 5 by 5 . Program does not compute perfect squares
//   19  6  1  2 11          consider 9 is i^2 and the top left corner is 9-2 which can be expressed as  i^2 - edge length +1  (first edge i^2-i+1 , second edge i^2-2i+2, third edge i^2-3i+3).
//   18  5  4  3 12          
//   17 16 15 14 13