// OBJECTIVE
// The radical of n, rad(n), is the product of the distinct prime factors of n.
// For example, 504 = 2^3 * 3^2 * 7, so rad(504) = 2 * 3 * 7 = 42.
// Let E(n) be the nth element in the sorted vector of (rad(n), n) for 1 <= n <= 100,000.
// If two numbers have the same radical value, they are sorted by n in ascending order.
// Find the value of n for E(10,000).
#include <iostream>
#include <math.h>
#include <vector>
#include <array>
#include <algorithm>
#include "../include/MathUtils.hpp"
using namespace std;
int temp,factor;
bool flag;
array<pair<int, int>, 100000> numbers; // pairs rad(n) and original number
vector<int> prime;

int main()
{
    for (int i = 0; i < 100000; i++)    if(Mathutilus::IsPrime(i)) prime.push_back(i); //stores primes in vector
    for (int i = 1; i <=100000; i++)
    {
        temp=i; factor=1; 
        for (int t :prime)//split the numbers apart as primes factor and multiply
        {
            if(temp==1) { break;}
            flag=false;
            while (temp%t==0 && temp>1)
            {
                temp/=t;
                flag = true;
            }
            if(flag) factor*=t;
        }
        numbers[i-1].first=factor; // form of function rad(n)
        numbers[i-1].second= i; // original number
    }
    sort(numbers.begin(), numbers.end()); // sorts based on form of rad(n)
    cout << numbers[9999].first << "_"<<numbers[9999].second;
}