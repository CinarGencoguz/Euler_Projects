#ifndef MATH_UTILS_HPP
#define MATH_UTILS_HPP

#include <math.h>
#include <string>
#include <iostream>
using namespace std;

namespace Mathutilus
{
    inline bool IsPrime(int a)  
    {
        if(a < 2) return false;     //eliminate number under 2
        if(a == 2 || a == 3 ) return true;      
        if(a % 2 == 0 || a % 3 == 0) return false;      //eliminate number can divided by 2 and 3
        if((a+1) % 6 != 0 && (a-1) % 6 != 0) return false;      //a prime number must be form in 6k+1 or 6k-1 beside 2 and 3
        for (size_t i = 3; i <= sqrt(a)+1; i+=2)        //if a number doesn't have a divider less than sqrt of it plus one mathematically it can't have one
        {                                               // because of that our threshold is sqrt of number plus 1
            if (a%i==0) return false;
        }
        return true;
    }

    inline int Factoriel(int a)
    {
       int temp=1;
        if (a<0)  return 0;
        if (a==0)   return 1;
        for (int i = 2; i <= a; i++)   temp *= i;
        return temp;
    }

    inline bool IsPalindromString(string s) // Checks if a string reads the same forward and backward
    {
        int left,right;
        left=0,right=s.size()-1;
        while (left<right)
        {
            if (s[left]!=s[right])
                return false;
            left++;right--;
        }
        return true;
    }
 
    inline bool IsPalindromInt(unsigned long long int a,int digit) // Checks if a int reads the same forward and backward
    {
        string x =to_string(a);
        for (int i = 0; i < digit/2; i++)
        {
            if (x[i]!=x[digit-(i)])   return false;
        }
        return true;
    }

    inline string PowofString(const string &num, int PowNum) // Multiplies a large number (represented as a string) by an integer
    {
        string result = "";
        int carry = 0;int prod;
        for (int i = num.size() - 1; i >= 0; i--)  // Process digits from right to left
        {
            prod = (num[i] - '0') * PowNum + carry; //Converts character to integer
            carry = prod / 10;                      //Converts character to integer
            prod %= 10;                             //keep single digit
            result = char(prod + '0') + result;     // Prepends digit to the result string
        }
        while (carry > 0) 
        {
            result = char(carry % 10 + '0') + result;
            carry /= 10;
        }
        return result;
    }

    inline long long int modpow(long long int base, unsigned long long int pow) // power simplify function
    {
    long long int res = 1;
    base %= mod; 
    while (pow > 0)  // get  it's power 1 time and process modulus which prevents overflow
    {
        if (pow % 2 == 1)          
        res = (res * base) % mod; 
        base = (base * base) % mod;   
        pow = pow / 2;              
    }
    return res;
    }

    inline bool IsPandigital(int a)// checks if the number has all digit except 0
    {
        set<int> nums;
        while (a>=1)
        {
            nums.insert(a%10);
            if (a%10==0&&nums.size()!=9)    return false;
            a/=10;
        }
        if (nums.size()!=9)     return false;
        return true;
    }
}

    
#endif // MATH_UTILS_HPP+