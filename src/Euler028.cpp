// OBJECTIVE
// What is the sum of the numbers on the diagonals in a 1001 by 1001 number spiral formed in the same way (starting with 1 and moving to the right in a clockwise direction)?
// https://projecteuler.net/problem=28 might need to inspect the image that can very usefull the solve problem
#include <iostream>
using namespace std;
long int result=1;//comes from  1x1 square

int main()
{
    for (int i = 3; i <= 1001; i+=2) //i is edge length
    {
        result+=4*(i*i)-(6*i)+6;     
    }
    cout<< result;
}


//   21 22 23 24 25
//   20  7  8  9 10          consider we are taking 5 by 5 and want to find , program calculates each square individually and use 4(i^2)-6i+6
//   19  6  1  2 11          consider 9 is i^2 and the top left corner is 9-2 which can be expressed as  i^2 - edge length +1  (first edge i^2-i+1 , second edge i^2-2i+2, third edge i^2-3i+3).
//   18  5  4  3 12          we can continue for other two corners and we got 4(i^2)-6i+6
//   17 16 15 14 13