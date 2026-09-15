// OBJECTIVE
// Find the first four consecutive integers to have four distinct prime factors each. 
// What is the first of these numbers?

#include <iostream>
#include <math.h>
#include "../include/MathUtils.hpp"
using namespace std;
int num=1001;
int primeNums[30000],primeCounter=0;

int primeFactor(int a)
{
    int temp , counter=0, primeCounter=0;
    while (counter<5)
    {
        if(primeNums[primeCounter]>a/2) break;
        if (a%primeNums[primeCounter]==0){counter++;}
        primeCounter++;
    }
    return counter==4;
}

int main()
{
    for (int i = 2; i < 150000; i++) //stores prime numbers in to an array
    {
        if (Mathutilus::IsPrime(i))
        {
            primeNums[primeCounter]=i;
            primeCounter++;
        }
    }
    while (true)//checks the number satisfy conditions
    {
        if (primeFactor(num) &&primeFactor(num+1) &&primeFactor(num+2) &&primeFactor(num+3))
        {
            cout<< num;
            break;
        }
        num++;
    }
}