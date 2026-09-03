// OBJECTIVE
// The following iterative sequence is defined for positive integers:
// n -> n/2 (n is even)
// n -> 3n + 1 (n is odd)
// Starting with 13: 13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
// Which starting number, under one million, produces the longest chain?

#include <iostream>
using namespace std;
int total,result,num;
long long unsigned int trash;

int main()
{
    for (int i = 1; i < 1000000; i++)
    {
        total=0; trash=i;
        while (trash!=1)
        {
             if ((trash %2) == 0)  
                trash /= 2;
             else
             {
                trash=3*trash+1;
             }
                total++;
        }
        if (total>result)
        {
             result=total; num=i;
        }
    }
    cout << result+1<<"       "<< num ;;
}