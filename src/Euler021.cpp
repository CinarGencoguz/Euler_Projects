#include <iostream>
using namespace std;
int dive1,dive2,a,result;
int nums[1000];

main()
{
    a=result=0;
    for (int i = 28; i < 10000; i++)
    {
        dive1=dive2=0;
        for (int k = 1; k <=(i/2)+1; k++)
        {
            if (i%k==0)
                dive1+=k;;
        }
        for (int t = 1; t < (dive1/2)+1; t++)
        {
            if (dive1%t==0)
                dive2+=t;
        }
        if (i==dive2&&i!=dive1)
        {
            nums[a]=i;
            a++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << nums[i]<< endl;
        result+=nums[i];
    }
    cout <<endl<< result;
}