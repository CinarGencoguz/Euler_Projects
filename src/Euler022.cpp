// OBJECTIVE
// Using names.txt, sort it into alphabetical order. Calculate the alphabetical 
// value for each name, then multiply by its alphabetical position to get a name score.
// What is the total of all the name scores in the file?

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
string arr[6000];
int n ,result;
string line,temp;
char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main() 
{
    result=n=0;
    ifstream file("0022_names.txt");
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
        for (int t = 1; t < arr[i].size()-1; t++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (arr[i][t]==alphabet[k])
                {
                    result+=(k+1)*(i+1);
                    break;
                }
            }
            
        }   
    }
    cout << result;
}
