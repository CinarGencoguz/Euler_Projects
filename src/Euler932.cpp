#include <iostream>
#include <math.h>
using namespace std;
unsigned long long int result,limit,a,b,c;
unsigned long long int a1,b1;
unsigned long long int csq,digitsq,digitsqH,digitsqL;
int digit,digitL,digitH;

bool IsDigitEven(unsigned long long int a,int& n)
{
    n=0;
    while (a>=1)
    {
        a/=10;
        n++;
    }
    if (n%2==0) 
    {
        return true;
    }
    return false;
}

int main()
{
    limit = pow(10,9)/10; result=0; c=8;
    while (digit<=16)
    {
        csq=c*c; digitsq=pow(10,digit/2);
        if(!IsDigitEven(c*c,digit)) 
        {
            digitH=(digit+1)/2; digitL=digitH-1;
            digitsqH=pow(10,digitH);digitsqL=pow(10,digitL);
            b=csq%digitsqH; a=csq/digitsqH;
            b1=csq%digitsqL; a1=csq/digitsqL;  
            if(b<digitsqH/10) {c++ ;continue;}      
            if(b<digitsqL/10) {c++ ;continue;}      
        }
        else
        {
            b=csq%digitsq; a=csq/digitsq;
            if(b<digitsq/10) {c++ ;continue;} 
        } 
        if(c==a+b||c==b1+a1)
        {
            result+=csq;
            cout<<csq;
            if (digit%2!=0)
            {
                cout<<"     "<< digit;
            }
            cout <<endl;
            
        }
        c++;
    }
    cout <<endl << result;
}