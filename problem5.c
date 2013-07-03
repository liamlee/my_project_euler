/*
* ��1~20 ����С������  Smallest multiple
* @author liamlee
* @date   2012-04-23
*/
#include<stdio.h>

int multiple(int,int);
int divisor(int,int);
int main()
{
    int i;
    long long p = 2520;
    for(i=11;i<21;i++)
    {
        p = multiple(p,i);
    }
    printf("%lld\n",p);
    return 0;
}

//���������Ĺ�Լ��
int divisor(int a,int b)
{
    int c;
    while(a%b)
    {
        c = a;
        a = b;
        b = c % b;
    }
    return b;
}

//���������Ĺ�����
int multiple(int a,int b)
{
    int c;
    c = divisor(a,b);
    return a * b / c;
}
