#include <iostream>
#include <string>
using namespace std;
unsigned long long int c;
string cc;
//1_2_3_4_5_6_7_8_9
int main()
{
    for (long long int i = 100000003; i < 147000000; i++)
    {
        if(i%10!=3&&i%10!=7) continue;
        c=i*i;  cc=to_string(c);
        if (cc[2]=='2'&&cc[4]=='3'&&cc[6]=='4'&&cc[8]=='5'&&cc[10]=='6'&&cc[12]=='7'&&cc[14]=='8')
        {
            cout << i*10; break;
        }
    }
}