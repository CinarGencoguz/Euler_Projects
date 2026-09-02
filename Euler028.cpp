#include <iostream>
using namespace std;
long int result=1;

main()
{
    for (int i = 3; i <= 1001; i+=2)
    {
        result+=4*(i*i)-(6*i)+6;
    }
    cout<< result;
}