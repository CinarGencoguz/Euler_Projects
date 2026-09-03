// OBJECTIVE
// Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int counter,num1,num2,num3,t,result;
string s;
bool ok;

bool IsPrime(int a)
{
    if(a < 2) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    for (size_t i = 3; i <= sqrt(a)+1; i++)
    {
        if (a%i==0)
            return false;
    }
    return true;
}

int main()
{
    counter=result=0;num1=11;
    while (counter!=11)
    {
        s=to_string(num1);ok=true;num2=num1;
        for (int i = 0; i < s.size(); i++)
        {
            t=pow(10,s.size()-i);
            if (!IsPrime(num1%t)||!IsPrime(num2/(t/10)))
                {ok=false;
                break;}
        }
        if (ok)
        {
            counter++; result+=num1;
            cout << num1<< endl;
        }
        num1++;
    }
    cout << result;
}