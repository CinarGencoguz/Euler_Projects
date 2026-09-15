// OBJECTIVE
// A number chain is created by continuously adding the square of the digits in a number 
// to form a new number until it has been seen before.
// Every number that arrives at 1 or 89 will become stuck in an endless loop.
// How many starting numbers below ten million will arrive at 89?

#include <iostream>
#include <math.h>
using namespace std;
unsigned long long int number,temp2,a;
int result=9999999,nOD; // nOD -> number of digit 

int main()
{
    for (int i = 1; i < 10000000; i++)//program computes number which is going to 1 after execution and eliminate them from 999999
    {
        number=i; temp2=0;
        while (temp2!=89)
        {
            temp2=0; nOD= log10(number)+1; //calculates number of digit by using logarithm
            for (int k = 0; k < nOD; k++) //computes sum of square of digits
            {
                a=number/pow(10,k); a=a%10;
                temp2+=a*a;
                cout << a < "_";
            } 
            cout << endl;
            if (temp2==1)   { result--; break;}
            number=temp2;
        }
    }
    cout << endl<<result;
}