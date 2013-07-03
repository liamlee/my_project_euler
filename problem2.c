/*
 * This is all things about Fibonacci
 * Even Fibonacci numbers
 * @author liamlee
 * @date   2012-04-20
*/


#include<stdio.h>

#define MAX 4000000

int main()
{
    int sum = 0;
    int x = 1;
    int f = 2;

    while(f <= MAX)
    {
        if(f % 2 == 0)
        {
            sum += f;
        }
        f = f + x;
        x = f - x;

    }
    printf("%d\n",sum);
    return 0;
}
float F(int n)
{
    if(n < 1) return 0;
    if(1 == n) return 1;
    else
    {
        float x = 0;
        //float y = 1;
        int i;
        float f = 1;
        for(i = 2;i <= n;i++)
        {
            f = x + f;
            x = f - x;  //将x置为f(i - 1)
          //  printf("%f\t",f);
           // if(0 == i % 5) printf("\n");
        }
        return f;
    }

   // return F(n - 1) + F(n - 2);
}

float F_topd(int n)  //自顶向下
{
    float t;
    if(knownF[n] != unknown)  //该项已知表示已计算过，直接返回
        return knownF[n];
    if(0 == n)
        t = 0;
    if(1 == n)
        t = 1;
    if(n > 1)
        t = F_topd(n - 1) + F_topd(n -2);
    return knownF[n] = t;       //储存当前结果以便后续不用重复计算，并返回结果
}

/*int main ( )
{
    int i;
    float F(int n);
    float F_topd(int n);
    for(i = 0;i<N;i++)
    {
        knownF[i] = 0;
    }
    float M = F(N);
    float L = F_topd(N);
  //  printf("\n");
    printf("Result: %f\n",M);
    printf("Result: %f\n",L);
    int a = 10;
    int i;
    int n,p[5],q[20];
    n=0;
    for(i=a;i>=1;i--)
        if(a%i==0)
        {   n++;
            p[n]=i;
        }

    return 0;
}*/
