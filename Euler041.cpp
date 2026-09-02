#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;
int nums[10]={1,2,3,4,5,6,7,8};
int n;
long int result,t;
string s;

bool IsPrime(int a)
{
    for (size_t i = 3; i <= sqrt(a)+1; i++)
    {
        if (a%i==0)
            return false;
    }
    return true;
}

main()
{
    n=7;result=0;
    do
    {
        s="";
        for (int i = 0; i < 7; i++)
        {
            s+=to_string(nums[i]);
        }
        t=stoll(s);
        if (IsPrime(t)&&t>result)
        {
            result=t;
        }
    } while (next_permutation(nums, nums + n));

    cout << result;
}

