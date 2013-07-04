/*
*Special Pythagorean triplet
* @author liamlee
* @date   2012-04-25
*/

#include<stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    for(a=1;a<1000;a++)
    {
        for(b=1;b<1000;b++)
        {
            int a1 = a*a;
            int b1 = b*b;
            int c = 1000 - (a+b);
            int c1 = c*c;
            if((a1+b1) == c1)
            {
                printf("%d %d %d %d",a,b,c,a*b*c);
                return 0;
            }
        }
    }
}
