<<<<<<< HEAD
/*
* Highly divisible triangular number
* @author liamlee
* @date   2012-05-28
*///
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int divisors(int);
int triangle(int);
int sushu(int);
void all_prime(double *prime);
int summ(double N,double *prime,int *b);

int main()
{
    int i=1;
    int sum = 1;
    double N = 20;
   // int a[100];
    int b[1000] = {0};
    double prime[1000];
    all_prime(prime);

    sum = summ(N,prime,b);
   /*while(sum < 500)
    {

        N = N + i;        //�����ǰ������
        memset(b,0,sizeof(b));
        sum = summ(N,prime,b);
        if(sum >= 500)
        {
            printf("����Ϊ��%f\n���Ӹ�����%d\n",N,sum);
           // printf("%d",i);
            break;
        }
        i++;
    }*/
    printf("%d",sum);

   /* for(i=1;;i++)
    {
        int N = i * (i+1) / 2;
        x = divisors(N);
       // y = divisors(i+1);
        if(x >= 500)
        {
            printf("%d",i);
            break;
        }
    }*/
    return 0;
}

int summ(double N,double *prime,int *b)
{
    int sum1 = 1;
    int k = 0;
    int i = 0;
    double x = N;
    while(prime[k] <= x)  //�������ֽ�������
    {
        while(fmod(x,prime[k]) == 0)
        {
            b[i]++;
            x /= prime[k];
        }
        k++;
        i++;
    }
    while(k>=0)
    {
        sum1 *= (b[k]+1);
        k--;
    }
    return sum1;
}

int divisors(int n)
{
    int i;
    int count = 1;
    for(i=1;i<=n/2;i++)
    {
        if((n % i) == 0)
            count++;
    }
    return count;
}

int triangle(int n)
{
    int sum = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}

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

void all_prime(double *prime)
{
    int a[1000];
    int i,j;
    for(i=0;i<1000;i++)
    {
        a[i] = 1;
    }
    for(i=2;i<1000;i++)
    {
        if(a[i] == 1)
        {
            for(j = i;i*j < 1000;j++)
            {
                a[i*j] = 0;
            }
            *prime++ = i;
        }
    }
}
=======
/*
* Highly divisible triangular number
* @author liamlee
* @date   2012-05-28
*///
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int divisors(int);
int triangle(int);
int sushu(int);
void all_prime(double *prime);
int summ(double N,double *prime,int *b);

int main()
{
    int i=1;
    int sum = 1;
    double N = 20;
   // int a[100];
    int b[1000] = {0};
    double prime[1000];
    all_prime(prime);

    sum = summ(N,prime,b);
   /*while(sum < 500)
    {

        N = N + i;        //�����ǰ������
        memset(b,0,sizeof(b));
        sum = summ(N,prime,b);
        if(sum >= 500)
        {
            printf("����Ϊ��%f\n���Ӹ�����%d\n",N,sum);
           // printf("%d",i);
            break;
        }
        i++;
    }*/
    printf("%d",sum);

   /* for(i=1;;i++)
    {
        int N = i * (i+1) / 2;
        x = divisors(N);
       // y = divisors(i+1);
        if(x >= 500)
        {
            printf("%d",i);
            break;
        }
    }*/
    return 0;
}

int summ(double N,double *prime,int *b)
{
    int sum1 = 1;
    int k = 0;
    int i = 0;
    double x = N;
    while(prime[k] <= x)  //�������ֽ�������
    {
        while(fmod(x,prime[k]) == 0)
        {
            b[i]++;
            x /= prime[k];
        }
        k++;
        i++;
    }
    while(k>=0)
    {
        sum1 *= (b[k]+1);
        k--;
    }
    return sum1;
}

int divisors(int n)
{
    int i;
    int count = 1;
    for(i=1;i<=n/2;i++)
    {
        if((n % i) == 0)
            count++;
    }
    return count;
}

int triangle(int n)
{
    int sum = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}

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

void all_prime(double *prime)
{
    int a[1000];
    int i,j;
    for(i=0;i<1000;i++)
    {
        a[i] = 1;
    }
    for(i=2;i<1000;i++)
    {
        if(a[i] == 1)
        {
            for(j = i;i*j < 1000;j++)
            {
                a[i*j] = 0;
            }
            *prime++ = i;
        }
    }
}
>>>>>>> a14b3b17acfec6364af21b6acf136a44e69f9657
