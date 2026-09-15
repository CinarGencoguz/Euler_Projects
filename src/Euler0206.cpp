// OBJECTIVE
// Find the unique positive integer whose square has the form 1_2_3_4_5_6_7_8_9_0, 
// where each "_" represents a single digit.

#include <iostream>
#include <string>
using namespace std;
unsigned long long int num;
string numString;
//1_2_3_4_5_6_7_8_9
int main()
{
    for (long long int i = 100000003; i < 147000000; i++) //program checking numbers whose square start at  1 and ending 9. I take out 0 to prevent the overflow and add it in final output
    {
        if(i%10!=3&&i%10!=7) continue;                   //we need to eliminate other than 3 and 7 because only 3 and 7 have squares ending in 9 
        num=i*i;  numString=to_string(num);              // for checking digits easily , converted to string
        if (numString[2]=='2'&&numString[4]=='3'&&numString[6]=='4'&&numString[8]=='5'&&numString[10]=='6'&&numString[12]=='7'&&numString[14]=='8')      cout << i*10; break; // those are just brute force
    }
}