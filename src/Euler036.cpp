// OBJECTIVE
// Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

#include <iostream>
#include <string>
#include <bitset>
using namespace std;
string s,s1;
int result;

bool IsPalidrom(string s)
{
    int l,r;
    l=0,r=s.size()-1;
    while (l<r)
    {
        if (s[l]!=s[r])
            return false;
        l++;r--;
    }
    return true;
}



int main()
{
   result=0;
    for (int i = 1; i < 1000000; i++)
    {
        s=to_string(i); bitset<20> a(i); s1=a.to_string();
        s1.erase(0, s1.find_first_not_of('0'));
        if (IsPalidrom(s)&&IsPalidrom(s1))
        {
            result+=i;
        }
    }
    cout<<result;
}



