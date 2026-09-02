#include <iostream>
using namespace std;
int result,sum;
//1p, 2p, 5p, 10p, 20p, 50p, £1
main()
{
    result=1;
    for (int i = 0; i <=2; i++)//100
    {
        if (i*100==200)
        {
            result++;
            break;
        }
        for (int k = 0; k <= 4-i*2; k++)//50
        {
            if (i*100+k*50==200)
            {
                result++;
                break;
            }
            for (int t = 0; t <=10-i*5-k*5/2; t++)//20
            {
                if (i*100+k*50+t*20==200)
                {
                    result++;
                    break;
                }
                for (int g = 0; g <=20-i*10-k*5-2*t; g++)//10
                {
                    if (i*100+k*50+t*20+g*10==200)
                    {
                        result++;
                        break;
                    }
                    for (int f = 0; f <=40-i*20-k*10-4*t-2*g; f++)//5
                    {
                        if (i*100+k*50+t*20+g*10+f*5==200)
                        {
                            result++;
                            break;
                        }
                        for (int b = 0; b <= 100-i*50-k*25-10*t-5*g-f*5/2; b++)//2
                        {
                            if (i*100+k*50+t*20+g*10+f*5+b*2==200)
                            {
                                result++;
                                break;
                            }
                            for (int a = 0; a <=200-i*100-k*50-20*t-10*g-5*f-2*b; a++)//
                            {
                                if (i*100+k*50+t*20+g*10+f*5+b*2+a==200)
                                {
                                    result++;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout <<result;
}