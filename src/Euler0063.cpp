// OBJECTIVE
// The 5-digit number, 16807 = 7^5, is also a fifth power. 
// Similarly, the 9-digit number, 134217728 = 8^9, is a ninth power.
// How many n-digit positive integers exist which are also an nth power?

#include <iostream>
#include <math.h>
using namespace std;
int power,result=0,digit;

int main()
{
    for (size_t i = 1; i < 10; i++) 
    {
        power=1;
        while (true)
        {
            digit=log10(pow(i,power))+1; // calculates the number of digits by using algorithm
            if (digit==power)
            {
                result++;
                power++;
            }
            else break;
        }       
    } 
    cout << result; 
}