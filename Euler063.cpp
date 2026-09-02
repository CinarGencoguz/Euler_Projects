#include <iostream>
using namespace std;
int counter,p,result;

bool arraymult(int base,int power)
{
    int nums[50]={0},k,remain,addition; 
    nums[0]=1; k=1;remain=addition=0;
    for (int i = 0; i < power; i++)
    {
        for (int t = 0; t < k; t++)     nums[t]*=base;
        for (int g = 0; g < k; g++)
        {
            if (g==k-1 && nums[g]>=10)
                k++;
            nums[g+1]+=nums[g]/10;
            nums[g]=nums[g]%10;
        }
    }
    if (power==k)   return true;
    return false;
}


int main()
{
    counter=1;result=0;p=1;
    while (counter<10)
    {
        for (int i =counter; i < 10; i++)
        {
            if (arraymult(i,p)==true)
            {
                result++;
                cout << i << "    "<< p << endl;
            }
            else    
            counter++;
        }
        p++;
    }
    cout << result;
}