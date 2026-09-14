#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

unsigned long long cube;
string key;

int main() 
{
    map<string, pair<int, unsigned long long>> cubeMap;

    for (unsigned long long i = 1; ; i++) //by using map we can pair combunation and how much it is has appeared
    {
        cube = i * i * i;   key = to_string(cube); // creating cube and store it as a string
        sort(key.begin(), key.end()); // sort the string lesser to bigger
        if (cubeMap[key].first == 0) cubeMap[key].second = cube; // if number is created for first time , program will store it 
        cubeMap[key].first++; 
        if (cubeMap[key].first == 5)     { cout << cubeMap[key].second ;break; }//stops when find 5 combination on a cube
    }
}