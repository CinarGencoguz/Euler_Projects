// OBJECTIVE
// The Fibonacci sequence is defined by F1 = 1, F2 = 1, Fn3 = Fn1 + Fn2.
// The 12th term, F12 = 144, is the first term to contain three digits.
// What is the index of the first term in the Fibonacci sequence to contain 1000 digits?

#include <iostream>
using namespace std;
int num1[1002]={0},num2[1002]={0};
int digit,temp,result;

int main() 
{
    digit=1;num1[0]=num2[0]=1;result=2;
    while (digit<1000)
    {
        result++;
        for (int i = 0; i < digit; i++) //Computes the next Fibonacci number
        {
            temp=num1[i]+num2[i];
            num1[i]=num2[i];
            num2[i]=temp;
        }
        for (int i = 0; i < digit; i++)// Propagates carry to the next digit and computes modulus
        {
            if (num1[i]>=10)
            {
                num1[i+1]+=num1[i]/10;
                num1[i]=num1[i]%10;        
            }
            if (num2[i]>=10)
            {
                num2[i+1]+=num2[i]/10;
                num2[i]=num2[i]%10; 
                if (i==digit-1)    digit++;
            }
        }
    }
    cout << result;
}
