// OBJECTIVE:
// A number is considered Lychrel if it fails to form a palindrome 
// by repeatedly reversing and adding its digits within 50 iterations.
// How many Lychrel numbers are there below ten-thousand?

#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
int counter,result=0;
string temp1,temp2,temp4;
int carry ,temp3,temp5;

bool IsPalindromString(string s) // Checks if a string reads the same forward and backward
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
int main()
{
    for (size_t i = 1; i < 10000; i++)
    {
        counter=0; temp1.to_string(i); temp2=temp1;
        std::reverse(temp2.begin(), temp2.end());
        while (true)
        {
            temp4=""; carry=0;
            for (size_t t = temp1.size()-1; t >=0 ; t++)
            {
                temp3 =(temp1[i] - '0') * 10 + (temp2[i] - '0') + carry;
                carry = (temp3+carry)/10;  temp5=(temp3+carry)%10;
                temp4+=(temp3+'0');
            }
            temp1=temp4; std::reverse(temp4.begin(), temp4.end());
            if (counter==50)    { result++;  break; cout <<i<<endl; }
            temp2=temp1; std::reverse(temp2.begin(), temp2.end());
        }
    }
    cout << result;
}