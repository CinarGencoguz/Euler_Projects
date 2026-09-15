// OBJECTIVE
// If the numbers 1 to 5 are written out in words: one, two, three, four, 
// five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
// If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, 
// how many letters would be used? 
// (Do not count spaces or hyphens. "three hundred and forty-two" uses 23 letters).

#include <iostream>
using namespace std;
int result=0,temp;
string tens[10]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety","eleven"};
string number[9]={"one","two","three","four","five","six","seven","eight","nine"};
//Computes: 10 times the first 99 numbers, 900 times 'hundred', 100 times each hundred prefix, 891 times 'and', and 'one thousand'
int main()
{
    for (size_t i = 1; i < 20; i++) // compute 1-19
    {
        if(i<10) result+=number[i-1].size();
       if(i>=10)result+=(tens[i-10].size()+2);//Adds 2 extra letters for the '-teen' pattern after 9, offset by -5 to correct cases like 10, 11, 12, and 14
    }
    result-=5;
    cout << result << endl;
    for (int i = 20; i < 100; i++)
    {
        temp=i/10;
        result+=tens[temp-1].size();
        if(i%10!=0) result+=number[(i%10)-1].size();   
    }
    cout << result << endl;
    result*=10;
    for (size_t i = 0; i < 9; i++)  {result+=(number[i].size()*100);}   //Adds letters for hundred prefixes, 'hundred', 'and' (891 times), and 'one thousand'
    result+=((900*7)+11+(891*3));
    cout << result;
}