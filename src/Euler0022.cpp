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
string words[6000],line,temp;
int n=0 ,result=0;
char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main() 
{
    ifstream file("../data/022_names.txt");
    if (!file.is_open())    return 1;
    getline(file, line);
    stringstream ss(line);
    while (getline(ss, temp, ','))   words[n++] = temp; // taking strings between ',' and stores in array and it's storing it as 'word'
    file.close();
    sort(words, words+n); //sorting array based on alphabet
    for (int i = 0; i < n; i++)
    {
        for (int t = 1; t < words[i].size()-1; t++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (words[i][t]==alphabet[k])
                {
                    result+=(k+1)*(i+1);
                    break;
                }
            }
            
        }   
    }
    cout << result;
}
