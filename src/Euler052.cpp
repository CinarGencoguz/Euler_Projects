// OBJECTIVE
// It can be seen that the number, 125874, and its double, 251748, contain exactly the same digits, 
// but in a different order.
// Find the smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, contain the same digits.

#include <iostream>
#include <math.h>
using namespace std;
int num,result,digit;

bool digitfinder(int num,int& result)
{
    int nums[6]={num,num*2,num*3,num*4,num*5,num*6}; int digit; int multdigit[6]={1,1,1,1,1,1};
    digit=0;
    while (num>=1)
    {
        num/=10;digit++;
    }
    for (int i = 0; i < 6; i++)
    {
        for (int k = 0; k < digit; k++)
        {
            int trash=pow(10,k+1);
            int trash2=pow(10,k);
            int trash3=(nums[i]%trash)/trash2;
            if (trash3==0)
                return false;
            multdigit[i]*=trash3;
        }
    }
    if (multdigit[0]==multdigit[1]&&multdigit[1]==multdigit[2]&&multdigit[2]==multdigit[3]&&multdigit[3]==multdigit[4]
        &&multdigit[4]==multdigit[5])
        {
            result=nums[0];
            return true;
        }
    return false;
}

int main()
{
    num=100; digit=3;
    while (true)
    {
        if (digitfinder(num,result))
        {
            cout<< result;
            break;
        }
        num++;
        if (num>166*pow(10,digit-3))
        {
            num=pow(10,digit);
            digit++;
        }
        cout << num<< endl;
    }
}