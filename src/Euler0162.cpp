#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include "../include/MathUtils.hpp"
using namespace std;
unsigned long long int result=0;

/*
 * Calculates the total number of valid hexadecimal numbers of length 'd' (d >= 3)
 * that contain at least one '0', at least one '1', and at least one 'A'.
 *
 * Uses the Inclusion-Exclusion Principle:
 * Total = |U| - (|0'| + |1'| + |A'|) + (|0'∩1'| + |0'∩A'| + |1'∩A'|) - |0'∩1'∩A'|
 * 
 * Simplified mathematical expression for d digits:
 * f(d) = 15 * 16^(d-1) - 43 * 15^(d-1) + 41 * 14^(d-1) - 13^d
 */
int main()
{
    for (int d = 3; d <= 16; d++)   { result+= 15 *Mathutilus::bigPow(16, d - 1) - 43 * Mathutilus::bigPow(15, d - 1) + 41 * Mathutilus::bigPow(14, d - 1) - Mathutilus::bigPow(13, d); }
    cout <<Mathutilus::hexadecimalConvergence(result);
}