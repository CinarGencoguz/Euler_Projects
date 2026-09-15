// OBJECTIVE
// The points P(x1, y1) and Q(x2, y2) are plotted at integer coordinates (x1, y1) and (x2, y2) 
// such that 0 <= x1, y1, x2, y2 <= N.
// Given that 0 <= x1, y1, x2, y2 <= 50, how many right-angled triangles can be formed 
// with one vertex at the origin O(0,0)?

#include <iostream>
#include <set>
using namespace std;
int x1,x2,x3,y1,y2,y3;
double slope1,slope2,slope3;
double slope12,slope13,slope23;
int result=0;
double Slope(int y,int x)//calculates slope
{
    if (x==0||y==0)
        return 0;
    double slope=(double)y/x;
    return slope;
}

int main()
{
   for (x1 = 0; x1 <= 50 x1++)
   {
      for (y1 = 0; y1 <= 50 y1++)
      {
        if(x1==0&&y1==0) continue;
        for (x2 = 0; x2 <= 50 x2++)
        {
            for (y2 =0; y2 <= 50 y2++)
            {
                if (x2==0&&y2==0) continue;
                x3=(x2-x1); y3=(y2-y1); // computes 3rd point cordinates
                slope1=(double)Slope(y1,x1);slope2=(double)Slope(y2,x2);slope3=(double)Slope(y3,x3); //calculates slope of point based on origin
                if (slope1==slope2&&slope2==slope3)
                    continue; 
                if ((slope1==0&&slope2==0)||(slope1==0&&slope3==0)||(slope3==0&&slope2==0))//if two edge's slopes is 0 , there are already parallel with one of axes and perpendiculer each other
                {
                    result++;
                    continue;
                }
                if (x1!=0||x2!=0)
                {
                    slope12=(double)(y1*y2)/(x1*x2); //slope of edge that created by 1st and 2nd points
                    slope13=(double)(y1*y3)/(x1*x3); //slope of edge that created by 1st and 3nd points
                    slope23=(double)(y3*y2)/(x3*x2); //slope of edge that created by 2st and 3nd points
                }  
                if (slope12==-1||slope23==-1||slope13==-1) // two edge slope's multiplication equals -1 which means there are perpendicular each other
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