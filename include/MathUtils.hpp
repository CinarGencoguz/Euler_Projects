#include <math.h>
#ifndef MATH_UTILS_HPP
#define MATH_UTILS_HPP


namespace Mathutils
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

    bool IsPalindromString(string s) // Checks if a string reads the same forward and backward
{
    int left,right;
    left=0,r=s.size()-1;
    while (left<right)
    {
        if (s[left]!=s[right])
            return false;
        left++;right--;
    }
    return true;
}


}



#endif // MATH_UTILS_HPP+