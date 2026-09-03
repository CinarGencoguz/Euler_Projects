// OBJECTIVE
// What is the sum of the numbers on the diagonals in a 1001 by 1001 number spiral formed in the same way (starting with 1 and moving to the right in a clockwise direction)?

#include <iostream>
using namespace std;
long int result=1;

int main()
{
    for (int i = 3; i <= 1001; i+=2)
    {
        result+=4*(i*i)-(6*i)+6;
    }
    cout<< result;
}