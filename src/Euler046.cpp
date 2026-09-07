// OBJECTIVE
// What is the smallest odd composite that cannot be written as the sum of a prime and twice a square?

#include <iostream>
#include <math.h>
#include "../include/MathUtils.hpp"
using namespace std;
int num,result;
bool found;

int main()
{
    num=9;
    while (true)
    {
        found=true;
        if (Mathutilus::IsPrime(num)) {num+=2; continue;} // we need composite number. That function check number is prime or not
        for (size_t i = 1; i*i*2 < num; i++)    
        {
            if (Mathutilus::IsPrime(num-(i*i*2))) // we need to decrease the number 2*i^2 and check new number is prime or not 
            {                                     // beside that threshold kept between 1 and i*i*2<num because if max output is higher than our number , new number will be negative 
                num+=2;                           // that will be unnecessary action and increase our execution time
                found=false; 
                break;
            }
        }   
        if (found)   {result= num ;  break;}
    }
    cout << result;
}



