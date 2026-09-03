#include <iostream>
using namespace std;
int day = 2;
int result = 0;
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    day = 2; result = 0;
    for (int year = 1901; year <= 2000; year++) 
	{
		month[1]=28;
        if (year%4==0)
			month[1]=29;
        for (int m = 0; m < 12; m++) {
            if (day == 0) 
			{ 
                result++;
                cout << year << "  " << m+1 << endl;
            }
            day = (day + month[m]) % 7;
        }
    }
    cout  << result << endl;
}
