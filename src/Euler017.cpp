// OBJECTIVE
// If the numbers 1 to 5 are written out in words: one, two, three, four, 
// five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
// If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, 
// how many letters would be used? 
// (Do not count spaces or hyphens. "three hundred and forty-two" uses 23 letters).

#include <iostream>
using namespace std;
int result=106,a;
string tens[9]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string number[9]={"one","two","three","four","five","six","seven","eight","nine"};
//hundred
int main()
{
    for (int i = 20; i < 100; i++)
    {
        a=i/10;
        result+=tens[a-1].size();
            if(i%10!=0)
                result+=number[(i%10)-1].size();
    }
    result*=10; result+=11; result+=900*7+891*3;
    for (int i = 0; i < 9; i++)
        result+=number[i].size()*100;
    cout << result;
}