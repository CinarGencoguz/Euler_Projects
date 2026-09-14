// OBJECTIVE
// It can be seen that the number, 125874, and its double, 251748, contain exactly the same digits, 
// but in a different order.
// Find the smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, contain the same digits.

#include <iostream>
#include <math.h>
#include <set>
using namespace std;
int num,result,digit,temp,temp2;
set <int> digits;

int main()
{
    num=100;    temp=log10(num)+1;
    while (true)
    {
        digits.clear();
        for (size_t i = 0; i <temp ; i++)  //stores different digits of num in set
        { 
            temp2=pow(10,i+1);  
         digits.insert((num%temp2)/(temp2/10));
        }
        digit=digits.size();
        for (size_t i = 0; i < temp; i++)//stores different digits of numm multiples in set
        {
            for (size_t t = 0; t< 5; t++)  
            { 
                temp2=pow(10,i+1); 
                digits.insert(((num*(t+1))%temp2)/(temp2/10));
            }
        } 
        if(digits.size()==digit) {result=num; break;}//if there is no difference between digits and multiples digits finish the program
        num++;
        if (num>166*pow(10,temp-3))
        {
            num=pow(10,temp);
            temp++;
        }
    }
    cout << result;
}