// OBJECTIVE
// Find the sum of all 0 to 9 pandigital numbers with sub-string divisibility properties.

//   Sub-string  | Divisibility Condition
//  -------------|------------------------
//   d2 d3 d4    | Divisible by 2  (d2d3d4 % 2 == 0)    d4 must be even
//   d3 d4 d5    | Divisible by 3  (d3d4d5 % 3 == 0)    sum of d3 d4 d5 must be divided by 3
//   d4 d5 d6    | Divisible by 5  (d4d5d6 % 5 == 0)    d6 must be 5 because d6d7d8 must be divided by 11 and consider as if 0d7d8 d7 will be same number with d8 that is not possible
//   d5 d6 d7    | Divisible by 7  (d5d6d7 % 7 == 0)    
//   d6 d7 d8    | Divisible by 11 (d6d7d8 % 11 == 0)   for 7,11,13 and 17 I decided compute number itself and process the modulus process
//   d7 d8 d9    | Divisible by 13 (d7d8d9 % 13 == 0)
//   d8 d9 d10   | Divisible by 17 (d8d9d10 % 17 == 0)

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int nums[10]={0,1,2,3,4,5,6,7,8,9};
long long int result=0;
string temp;


int main()
{
    do {
        if (nums[5]==5&&nums[3]%2==0&&(nums[2]+nums[3]+nums[4])%3==0)
        {
            if ((nums[4]*100+nums[5]*10+nums[6])%7==0&&(nums[5]*100+nums[6]*10+nums[7])%11==0)
            {
                if ((nums[6]*100+nums[7]*10+nums[8])%13==0&&(nums[7]*100+nums[8]*10+nums[9])%17==0)
                {
                    temp="";
                    for (int i = 0; i < 10; i++)   temp+=to_string(nums[i]);
                    result+=stoll(temp);
                }                
            }            
        }          
    } while (next_permutation(nums, nums + 10)); // compute all possible permutation
    cout << result;
}