#include <iostream>
#include <set>
using namespace std;
int x1,x2,x3,y2,y3,Y1;
double slope1,slope2,slope3;
double slope12,slope13,slope23;
int result;
double Slope(int y,int x)
{
    if (x==0||y==0)
        return 0;
    double slope=(double)y/x;
    return slope;
}

int main()
{
   int t=50; result=0;
   for (x1 = 0; x1 <= t; x1++)
   {
      for (Y1 = 0; Y1 <= t; Y1++)
      {
        if(x1==0&&Y1==0) continue;
        for (x2 = 0; x2 <= t; x2++)
        {
            for (y2 =0; y2 <= t; y2++)
            {
                if (x2==0&&y2==0) continue;
                x3=(x2-x1); y3=(y2-Y1);
                slope1=(double)Slope(Y1,x1);slope2=(double)Slope(y2,x2);slope3=(double)Slope(y3,x3);
                if (slope1==slope2&&slope2==slope3)
                    continue; 
                if ((slope1==0&&slope2==0)||(slope1==0&&slope3==0)||(slope3==0&&slope2==0))
                {
                    result++;
                    continue;
                }
                if (x1!=0||x2!=0)
                {
                    slope12=(double)(Y1*y2)/(x1*x2);
                    slope13=(double)(Y1*y3)/(x1*x3);
                    slope23=(double)(y3*y2)/(x3*x2);
                }  
                if (slope12==-1||slope23==-1||slope13==-1)
                {
                    result++;
                    continue;
                }  
            }  
        }
      } 
   }
   cout << result/2;
}