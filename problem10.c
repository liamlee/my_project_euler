/*
* Summation of primes
* @author liamlee
* @date   2012-04-26
*/
//��2000000���ڵ�������

#include<stdio.h>
#include<math.h>
#define N 2000000

int sushu(int a)     //a����Ҫ�жϵ���
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
    int i = 3;
    long long sum = 2;
    while(i <= N)
    {
        if(sushu(i))
        {
            sum += i;
        }
        i += 2;
    }
    printf("%lld\n",sum);
    return 0;
}
