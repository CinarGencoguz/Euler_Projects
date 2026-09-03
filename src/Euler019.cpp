// OBJECTIVE
// How many Sundays fell on the first of the month during the twentieth 
// century (1 Jan 1901 to 31 Dec 2000)?
// Given: 1 Jan 1900 was a Monday.

#include <iostream>
using namespace std;
int day = 2; //1 Jan 1901 is Tuesday
int result = 0;
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//day numberization start with as 0=sunday
int main() 
{
    for (int year = 1901; year <= 2000; year++) 
	{
		month[1]=28;
        if (year%4==0)  month[1]=29;     //looking for February's number of days
        for (int m = 0; m < 12; m++) 
        {
            if (day == 0)               // looking for every month first day
			{ 
                result++;
                cout << year << "  " << m+1 << endl;
            }
            day = (day + month[m]) % 7;
        }
    }
    cout  << result << endl;
}
