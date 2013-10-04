/*
*求第10001个素数
*10001st prime
* @author liamlee
* @date   2012-04-25
*/

#include<stdio.h>
#include<math.h>

int sushu(int a)     //a是需要判断的数
{
    int b;
    for(b=2;b <=sqrt(a);b++)
    {
        if(a%b==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i;
    int count = 1;
    for(i=3;;)
    {
        if(count == 10001)
        {
            printf("%d %d\n",count,i-2);
            break;
        }
        if(sushu(i))
        {
            count++;
        }
        i += 2;
    }
    return 0;
}


