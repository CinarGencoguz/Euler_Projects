// OBJECTIVE
// An irrational decimal fraction is created by concatenating the positive integers: 0.12345678910111213...
// If d_n represents the n-th digit of the fractional part, find the value of the expression:
// d_1 × d_10 × d_100 × d_1000 × d_10000 × d_100000 × d_1000000

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
string nums;
int result;

int main()
{
    nums="";result=1;
    for (int i = 1; i < 250000; i++)
    {
        nums+=to_string(i);
    }
    for (int i = 0; i < 7; i++)
    {
        result*=nums[pow(10,i)-1]-'0';
    }
    cout <<result;
}



