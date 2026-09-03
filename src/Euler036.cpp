// OBJECTIVE
// Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

#include <iostream>
#include <string>
#include <bitset>
#include "../include/MathUtils.hpp"

using namespace std;
string string1,string2;
int result;


int main()
{
   result=0;
    for (int i = 1; i < 1000000; i++)
    {
        string1=to_string(i); bitset<20> a(i); string2=a.to_string();
        string1.erase(0, string2.find_first_not_of('0'));
        if (Mathutilus::IsPalindromString(string1)&&Mathutilus::IsPalindromString(string2))
        {
            result+=i;
        }
    }
    cout<<result;
}



