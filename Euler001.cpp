#include <iostream>
using namespace std;
int sum=0;

main()
{
    for(int i=3; i<1000; i++)
    {
        if(i%3==0&&i%5==0)
          sum+=i;
        else if(i%3==0)
          sum+=i;
        else if(i%5==0)
          sum+=i;
    }
    cout <<"sum = "<< sum << endl;
}