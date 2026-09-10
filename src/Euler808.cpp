// OBJECTIVE
// A reversible prime square is a square of a prime number that is not a palindrome, 
// whose reverse is also the square of a prime number.
// Find the sum of the first 50 reversible prime squares.

#include <iostream>
#include <math.h>
#include <string>
#include "../include/MathUtils.hpp"
using namespace std;
int counter,i,digit;
unsigned long long int num1,num2,temp,result;

int main()
{
    counter=result=0;i=11;
    while(counter!=50)
    {
        if(!Mathutilus::IsPrime(i)) {i+=2; continue;}
        num1=i*i; 
        digit=(int)log10(num1); //Computes the number of digits by using log10
        num2=0;
        for (int t = 0; t <= digit; t++) // Reverses the digits of num1
        {
            temp=num1/pow(10,t); 
            temp%=10; 
            temp*=pow(10,digit-t);
            num2+=temp;
        }
        temp=sqrt(num2);
        if (Mathutilus::IsPrime(temp)&& num2==temp*temp&&num1!=num2)    {counter++; result+=num1;} // check if square root of num2 prime , is it perfect square and is num2 same as real num1
        i+=2;
    }
    cout <<result;
}