// OBJECTIVE
// Working from left to right if no digit is exceeded by the digit to its left it is called an increasing number (e.g., 134468).
// Similarly if no digit is exceeded by the digit to its right it is called a decreasing number (e.g., 66420).
// We shall call a positive integer that is neither increasing nor decreasing a 'bouncy' number (e.g., 155349).
// Clearly there cannot be any bouncy numbers below one hundred, but just over half of the numbers below one thousand (525) are bouncy.
// In fact, the least number for which the proportion of bouncy numbers first reaches 50% is 538.
// Find the least number for which the proportion of bouncy numbers is exactly 99%.

#include <iostream>
#include <math.h>
using namespace std;
long int bouncyNum=0,non=99,temp1,i=100;
int counter,digit1,digit2,temp3;

int main()
{
    while(true)// program checks numbers starting from 100 to find where bouncy ratio reaches 99%
    {
        temp1=i; digit1=temp1%10; counter=0; temp3=log10(i);
        while (temp1>=10)// compares adjacent digits from right to left to detect increasing or decreasing pattern
        {
            temp1/=10;
            digit2=temp1%10;
            if(digit1>digit2) counter++;
            if(digit1<digit2) counter--;
            if(digit1==digit2) temp3--;
            digit1=digit2;
        }
        if(abs(counter)==temp3) non++; // if all digit comparisons are consistent, number is non-bouncy
        else bouncyNum++;
        if(bouncyNum==99*non) {cout <<i;break; } // verifies if bouncy ratio hits exactly 99%
        i++;
    }
}