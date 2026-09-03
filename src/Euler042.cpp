// OBJECTIVE
// The n-th term of the sequence of triangle numbers is given by, t_n = ½n(n+1).
// Using words.txt, a 16K text file containing nearly two-thousand common English words, 
// how many are triangle words?

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
string arr[6000];
int n ,result,g;
string line,temp;
char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//n^2+n-2y=0  b^2-4ac    1  -4*-2
bool isTriangle(long long x) 
{
    long long s = 1 + 8*x;
    long long root = (long long)(sqrt(s) + 0.5);
    return root*root == s;
}
int vmain() 
{
    result=n=0;
    ifstream file("0042_words.txt");
    if (!file.is_open()) 
    {
        return 1;
    }
    getline(file, line);
    stringstream ss(line);
    while (getline(ss, temp, ',')) 
    {
        arr[n++] = temp;
    }
    file.close();
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        g=0;
        for (int t = 1; t < arr[i].size()-1; t++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (arr[i][t]==alphabet[k])
                {
                    g+=(k+1);
                }
            }
        }
        if (isTriangle(g))
            result++;   
    }
    cout << result;
}
