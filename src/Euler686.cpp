#include <iostream>
#include <math.h>
using namespace std;
double a1;
long int power;
int prob,a2;
int main()
{
    prob=678910; power=1;
    while(prob!=0)
    {
        a1=power*log10(2);
        a2=a1; a1-=a2;
        if (a1>=log10(1.23)&&a1<log10(1.24))    prob--;
        power++;
    }
    cout << power-1;
}