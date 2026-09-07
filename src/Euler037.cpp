// OBJECTIVE
// Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

#include <iostream>
#include <math.h>
#include <string>
#include "../include/MathUtils.hpp"
using namespace std;
int counter,startpoint,mod,result;
string s;
bool isTruncatable;

int main()
{
    counter=result=0;startpoint=11;
    while (counter!=11)
    {
        s=to_string(startpoint); isTruncatable=true;// converted to string for easily find size of integer
        if (!Mathutilus::IsPrime(startpoint)){ startpoint +=2 ; continue;}
        for (int i = 0; i < s.size(); i++)
        {
            mod=pow(10,s.size()-i);    //find modulus and diverder . as example  397  mod = 100
            if (!Mathutilus::IsPrime(startpoint%mod)||!Mathutilus::IsPrime(startpoint/(mod/10)))  // first prime controller look right to left top right 397 97 7 , second one look opposite way 3 39 397
                {isTruncatable=false;
                break;}
        }
        if (isTruncatable)  {counter++; result+=startpoint;}
        startpoint+=2;
    }
    cout << result;
}