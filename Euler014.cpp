#include <iostream>
using namespace std;
int total,result,num;
long long unsigned int trash;

main()
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