// OBJECTIVE:
// A number is considered Lychrel if it fails to form a palindrome 
// by repeatedly reversing and adding its digits within 50 iterations.
// How many Lychrel numbers are there below ten-thousand?

#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include "../include/MathUtils.hpp"
using namespace std;

int counter,result=0;
string num1 ,num2,strTemp1;

int main()
{
    for (int i = 1; i < 10000; i++)
    {
        num1=to_string(i); strTemp1=num1; counter =0;//converts integer to string prevent overflow 
        std::reverse(strTemp1.begin(), strTemp1.end());//reverses the number1 and store as number 2
        num2=strTemp1;
       while (true)
       {
            num1 =strTemp1= Mathutilus::addString(num1,num2); // adding to string which stores integer
            if(Mathutilus::IsPalindromString(num1)) break; // checks is it palindrom or not
            std::reverse(strTemp1.begin(), strTemp1.end());
            num2= strTemp1;
            counter++;
            if(counter==50) { result++; break;}
       }
       
    }
    cout << result;
}