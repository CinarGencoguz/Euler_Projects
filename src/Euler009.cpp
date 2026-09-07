// OBJECTIVE
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.
#include <iostream>
#include <math.h>
using namespace std;
int c,result;
bool found=false;

main()
{
   for (int a = 1; a < 500 && !found; a++)
   {
      for (int b = 1; b < 500; b++)
      {
         c=pow((pow(a,2)+pow(b,2)),0.5); //set c as (a^2+b^2)^(1/2)
         if (a+b+c==1000&&a*a+b*b==c*c)
         {
            found=true;
            result = a*b*c;
         }
      }
   }
   cout << result;
}