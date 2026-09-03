// OBJECTIVE
// Find the sum of all 0 to 9 pandigital numbers with sub-string divisibility properties.

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int nums[10]={0,1,2,3,4,5,6,7,8,9};
int n;long long int result,a;
string s;


int main()
{
    result=0; n=10;
    do {
        if (nums[5]==5&&nums[3]%2==0&&(nums[2]+nums[3]+nums[4])%3==0)
        {
            if ((nums[4]*100+nums[5]*10+nums[6])%7==0&&(nums[5]*100+nums[6]*10+nums[7])%11==0)
            {
                if ((nums[6]*100+nums[7]*10+nums[8])%13==0&&(nums[7]*100+nums[8]*10+nums[9])%17==0)
                {
                    s="";
                    for (int i = 0; i < 10; i++)
                    {
                        s+=to_string(nums[i]);
                    }
                    a=stoll(s);result+=a;
                }                
            }            
        }          
    } while (next_permutation(nums, nums + n));
    cout << result;
}