/*
* The square of sum minus the sum of spuare
* @author liamlee
* @date   2012-04-24
*/

#include<stdio.h>

long int sumsqua(int);
long int squasum(int);

int main()
{
    long int a = sumsqua(100);
    long int b = squasum(100);
    printf("%ld\n",b - a);
}

//平方的和
long int sumsqua(int n)
{
    long int sum = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        sum += i * i;
    }
    return sum;
}

//和的平方
long int squasum(int n)
{
    long int squa = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        squa += i;
    }
    return squa * squa;
}
