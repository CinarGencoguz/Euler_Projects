// OBJECTIVE
// Find the value of d < 1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.

#include <iostream>
#include <math.h>
using namespace std;
unsigned long long int result,temp1,temp2,counter;

void division_2_5(unsigned long long int& a)//In this mathematical problem, factors of 2 and 5 do not affect the recurring cycle length, so they can be eliminated
{
    while (a%2==0)  a/=2;
    while (a%5==0)  a/=5;
}

int main()
{
    for (int i = 2; i < 1000; i++)
    {
        temp1=i; division_2_5(temp1);  counter=1; temp2=10%temp1;
        if(temp1 == 1) continue;
        while(temp2!=1) //Starts at number = 10 % d, multiplies by 10, and repeatedly applies the modulo operator. Finding 1 indicates the end of a cycle
        {
            temp2 = (temp2 * 10) % temp1;       // For example: 1/7 -> 10%7=3, 30%7=2, 20%7=6, 60%7=4, 40%7=5, 50%7=1 (cycle repeats) 
            counter++;                          // When the remainder becomes 1, the cycle length equals the number of modulo operations performed
        }
        if(counter > result)    result = i;
    }
    cout << result;
}