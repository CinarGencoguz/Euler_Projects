#include <iostream>
using namespace std;
int result;

//top!/(minus!*bot!)
bool combination(int top,int bot)
{
    int minus=top-bot;   int counter=top;   int topnums[100];   int botnums[100];  int num1=0; long double result=1;
    for (int f = 0; f < 100; f++)   botnums[f]=topnums[f]=1;
    if (bot>minus) counter=bot;
    else  counter=minus;
    for (int t = 2; t <= top-counter; t++)
    {
        botnums[num1]=t;
        num1++;
    }
    num1=0;
    for (int i = top; i >counter ; i--)
    {
        topnums[num1]=i;
        num1++;
    }
    for (int g = 0; g < num1; g++)
    {
        result*=topnums[g];
        result/=botnums[g];
        if (result>1000000)  return true;
    }
    return false;  
}

main()
{
    for (int i = 10; i < 101; i++)
        for (int k = 2; k <= i-2; k++) 
            if (combination(i,k))    result++;
    cout << result;
}