#include <iostream>
using namespace std;
int result=106,a;
string tens[9]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string number[9]={"one","two","three","four","five","six","seven","eight","nine"};
//hundred
main()
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