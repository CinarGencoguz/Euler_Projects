// OBJECTIVE
// A number n is called a 2-split square if its square can be split into two non-empty numbers 
// a and b such that n = a + b (e.g., 81^2 = 6561, 65 + 61 = 126 != 81; but 9^2 = 81 -> no split; 
// 3025 = 55^2, 30 + 25 = 55).
// Find the sum of all 2-split squares up to a given bound.

#include <iostream>
#include <math.h>
using namespace std;
unsigned long long int result=0,num=50;
unsigned long long int temp1,temp2,split1,split2,numSquare;
unsigned long long int digitsq,digitsquareH,digitsquareL;
int digit,digitL,digitH;
bool IsDigitEven(unsigned long long int a,int& n) // checking number of digit is even or not
{
    n=0;
    while(a>=1)
    {
        a/=10;
        n++;
    }
    if (n%2==0)    return true;
    return false;
}

int main()
{
    while (digit<=16) // program splits the integer by using modulus and division. as an example 4982 => 4982/100 =49 , 4982%100 =82 and we got 49 and 82
    {
        numSquare=num*num; digitsq=pow(10,digit/2);
        if(!IsDigitEven(num*num,digit))  // if it is not even we split as x -- x+1 or x+1 -- x 
        {
            digitH=(digit+1)/2; digitL=digitH-1;  //digitH split it as x -- x+1 , digitL split it as x+1 -- x
            digitsquareH=pow(10,digitH);digitsquareL=pow(10,digitL);
            split2=numSquare%digitsquareH; split1=numSquare/digitSquareH;  
            temp2=numSquare%digitsquareL; temp1=numSquare/digitSquareL;         
        }
        else    {split2=numSquare%digitsq; split1=numSquare/digitsq;} //If the digit count is even, split the number equally and execute the checking procedure
        if(split2<digitsquareH/10) {num++ ;continue;}
        if(num==split1+split2||num==temp2+temp1)
        {
            result+=numSquare;
            cout<<numSquare<<endl;
        }
        num++;
    }
    cout <<endl << result;
}