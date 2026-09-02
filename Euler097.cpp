#include <iostream>
using namespace std;
unsigned long long int result,mod;

int main()
{
    result=1;mod=10000000000;
    for (int i = 0; i < 7830457; i++)   
    {
        result*=2; result%=mod;
    }
    result*=28433;result%=mod;result+=1;
    cout <<result;
}