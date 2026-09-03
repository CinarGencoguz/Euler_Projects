// OBJECTIVE
// The Fibonacci sequence is defined by F1 = 1, F2 = 1, Fn = Fn-1 + Fn-2.
// The 12th term, F12 = 144, is the first term to contain three digits.
// What is the index of the first term in the Fibonacci sequence to contain 1000 digits?

#include <iostream>
using namespace std;
int num1[1002]={0},num2[1002]={0};
int digit,trash,result;

int main() 
{
    digit=1;num1[0]=num2[0]=1;result=2;
    while (digit<1000)
    {
        result++;
        for (int i = 0; i < digit; i++)
        {
            trash=num1[i]+num2[i];
            num1[i]=num2[i];
            num2[i]=trash;
        }
        for (int i = 0; i < digit; i++)
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
                if (i==digit-1)
                {
                    cout << digit<<endl;
                    digit++;
                }
            }
        }
    }
    cout << result;
}
