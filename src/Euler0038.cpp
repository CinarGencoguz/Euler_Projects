// OBJECTIVE
// What is the largest 1 to 9 pandigital 9-digit number that can be formed as the 
// concatenated product of an integer with (1,2, ... , n) where n > 1?

#include <iostream>
#include "../include/MathUtils.hpp"
using namespace std;
long int num,result=0;

int main()
{   
    for (size_t i = 9000; i < 9500; i++)//Starts search at 9000 since the largest 9-digit pandigital must begin with 9
    {                                   // after 9500 there is no pandigital number that fits this problem
        num=i*100000+i*2; // compute num
        if (Mathutilus::IsPandigital(num)&&num>result)  result=num; 
    }
    cout << result;
}