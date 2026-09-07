// OBJECTIVE
// The following iterative sequence is defined for positive integers:
// n -> n/2 (n is even)
// n -> 3n + 1 (n is odd)
// Starting with 13: 13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
// Which starting number, under one million, produces the longest chain?

#include <iostream>
using namespace std;
int counter,result,num;
long long  int temp; // selected long long int to prevent overflow

int main()
{
   for (int i = 1; i < 1000000; i++)
   {
      counter=0; temp=i;
      while (temp!=1) 
      {
         if ((temp %2) == 0)  temp /= 2;
         else  temp=3*temp+1;
         counter++;
      }
      (counter > result) && (result = counter, num = i); //if counter is greater than result to reassign result and store number that has longest chain
   }
   cout << num ;;
}