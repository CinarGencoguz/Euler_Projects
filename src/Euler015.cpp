// OBJECTIVE
// Starting in the top left corner of a 2x2 grid, and only being able to move 
// to the right and down, there are exactly 6 routes to the bottom right corner.
// How many such routes are there through a 20x20 grid?

#include <iostream>
using namespace std;
long long int result=1; // selected long long int to prevent overflow

int main()
{
    for (size_t i = 21; i <= 40; i++) // based on formula 40!/(20!x20!) we can eliminate first 20! because 40 has already has every multiplication 20! has,
    {                                 // we dont need to worry about the result can divides evenly without leaving a remainder 
        result*=i;                    // because  every loop execution ,we can consider numerator and denominator as consecutive number 
        result/=(i-20);
    }
    
    cout<< result;
}