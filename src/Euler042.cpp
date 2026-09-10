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
#include "../include/MathUtils.hpp"
using namespace std;

string words[6000],line,temp2;
int n =0,result=0,temp1;
char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main() 
{
    ifstream file("../data/042_names.txt");
    if (!file.is_open())    return 1;
    getline(file, line);
    stringstream ss(line);
    while (getline(ss, temp2, ','))  words[n++] = temp2; // taking strings between ',' and stores in array and it's storing it as 'word'
    file.close();
    sort(words, words+n); //sorting array based on alphabet
    for (int i = 0; i < n; i++)
    {
        temp1=0;
        for (int t = 1; t < words[i].size()-1; t++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (words[i][t]==alphabet[k])
                {
                    temp1+=(k+1);
                }
            }
        }
        if (Mathutilus::isTriangle(g))  result++;   
    }
    cout << result;
}
