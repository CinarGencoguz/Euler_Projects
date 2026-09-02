#include <iostream>
#include <string>
#include <math.h>
using namespace std;
string nums;
int result;

main()
{
    nums="";result=1;
    for (int i = 1; i < 250000; i++)
    {
        nums+=to_string(i);
    }
    for (int i = 0; i < 7; i++)
    {
        result*=nums[pow(10,i)-1]-'0';
    }
    cout <<result;
}



