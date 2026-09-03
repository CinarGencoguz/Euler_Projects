#include <iostream>
#include <set>
#include <string>
using namespace std;
string s;
long int a,result;

bool IsPandigital(int a)
{
    set<int> nums;
    while (a>=1)
    {
        nums.insert(a%10);
        if (a%10==0&&nums.size()!=9)
            return false;
        a/=10;
    }
    if (nums.size()!=9)
            return false;
    return true;
}

main()
{   
    result=0;
    for (size_t i = 9000; i < 9500; i++)
    {
        s="";
        s+=to_string(i)+to_string(i*2);
        a=stoll(s);
        if (IsPandigital(a)&&a>result)
            result=a;
    }
    cout << result;
}



