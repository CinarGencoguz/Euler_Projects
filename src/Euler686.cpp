// OBJECTIVE
// p(L, n) is defined as the nth positive integer j such that 2^j starts with the decimal digits of L.
// Find p(123, 678910).

#include <iostream>
#include <math.h>
using namespace std;
double temp1;
long int power;
int counter,temp2;
int main()
{
    counter=678910; power=1;
    while(counter!=0)
    {
        temp1=power*log10(2);  // program computes the logarithmic form of it. as an example 2^7 logaritmic form 2.107.... 
        temp2=temp1; temp1-=temp2; //we are decreasing the number of digits as integer
        if (temp1>=log10(1.23)&&temp1<log10(1.24))    counter--;// integer part shows us how many digits it has , decimal part if we take it as power of 10 as 10^x
        power++;                                                // it'll show us starting number , I did it as a reverse. I took the logarithm of threshold and our number should be in it
    }
    cout << power-1;
}