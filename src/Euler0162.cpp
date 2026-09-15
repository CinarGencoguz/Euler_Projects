// OBJECTIVE
// In the hexadecimal number system numbers are represented using 16 different digits:
// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
// 
// The hexadecimal number AF when written in the decimal number system equals 10 × 16 + 15 = 175.
// 
// In the hexadecimal writing of numbers, we consider the digits 0, 1, and A.
// We are interested in hexadecimal numbers, for which the digits 0, 1, and A all appear at least once.
// Note that a valid number cannot start with the digit 0.
// 
// For example:
// - 10A is a valid hexadecimal number of length 3.
// - 1A0 is also valid.
// - 01A is not valid because it starts with 0.
// 
// How many hexadecimal numbers of length at most 16 (i.e. length 3 to 16) contain at least one 0, at least one 1, and at least one A?
// Give your answer as a hexadecimal string.
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