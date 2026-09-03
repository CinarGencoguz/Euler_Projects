// OBJECTIVE
// A palindromic number reads the same both ways. The largest palindrome made 
// from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
using namespace std;
int nums[6];
int num,total ,result;

int main()
{
    for (int i = 800; i < 1000; i++)
    {
        for (int k = 800; k < 1000; k++)
        {
            total=i*k; num=0;
            while (total>=1)
            {
                nums[num]=total%10;
                total/=10;
                num++;
            }
            if (nums[0]==nums[5]&&nums[1]==nums[4]&&nums[2]==nums[3])
            {
                result=i*k;
            }    
        }
    }
    cout<< result;
}