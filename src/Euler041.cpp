// OBJECTIVE
// What is the largest n-digit pandigital prime that exists?

#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int nums[10]={1,2,3,4,5,6,7,8};
long int result=0,temp;
string s;

int main()
{
    // I eliminate 9 and 8 because 1+2+3+4+5+6+7+8 =36 can be divided by 3 , 36+9 =45 also can be divided by 3;
    // compute all possible permutation and check it is prime or not
    do
    {
        s="";
        for (int i = 0; i < 7; i++)  s+=to_string(nums[i]);
        temp=stoll(s);
        if (Mathutilus::IsPrime(temp)&&temp>result)  result=temp;
    } while (next_permutation(nums, nums + 7));

    cout << result;
}

