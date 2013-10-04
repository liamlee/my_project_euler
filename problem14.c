<<<<<<< HEAD
/*
* Longest Collatz sequence
* @author liamlee
* @date   2012-05-13
*/

//求使得序列最长的起点数 序列构造如下
//n->n/2  n is even
//n->3n+1 n is odd
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 1000000
#define M 136870911
unsigned a[M] = {0};

int mod_3(int);
int is_odd(int);
int make_list(double);  //还得调试
int make_list_all(int); //得到正确解

int main()
{
    int max = 0,temp = 0;
    int n = 0;
    int i;
    a[1] = 1;
    //printf("%d\n",n);
    for(i=1;i<N;i++)
    {
        temp = make_list_all(i);
        if(temp > max)
        {
            max = temp;
            n = i;
        }
    }
    printf("%d %d\n",n,max);
    return 0;
}

int make_list_all(int n)
{
    double m = n;
    int count = 1;
    while(m!=1)
    {
        if(fmod(m,2) == 0)
        {
            m /= 2;
        }
        else
        {
            m = 3*m + 1;
        }
        count++;
    }
    return count;
}

int make_list(double n)
{
    double m = n;
    int temp = 1;
    if(m < M)
    {
        int x = n,y = m;
        if(a[x])
            return a[x];
        else
        {
            if(fmod(m,2) == 0)
            {
                m /= 2;
            }
            else
            {
                m = 3 * m + 1;
            }
            temp += make_list(m);
            a[y] += temp;
            return a[y];
        }
    }
    else
    {
        temp++;
        if(fmod(m,2) == 0)
        {
            m /= 2;
        }
        else
        {
            m = 3 * m + 1;
        }
        temp += make_list(m);
        return temp;
    }
}

/*int mod_3(int n)
{
    if(n == 1)
        return 0;
    else if((n-1) / 3 == 1)
        return 0;
    else if((n-1) % 3 != 0)
        return 0;
    else
        return 1;
}*/

/*int is_odd(int n)
{
    int a = (n-1) / 3;
    if((a%2) == 0)
        return 0;
    else
        return 1;
}*/
=======
/*
* Longest Collatz sequence
* @author liamlee
* @date   2012-05-13
*/

//求使得序列最长的起点数 序列构造如下
//n->n/2  n is even
//n->3n+1 n is odd
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 1000000
#define M 136870911
unsigned a[M] = {0};

int mod_3(int);
int is_odd(int);
int make_list(double);  //还得调试
int make_list_all(int); //得到正确解

int main()
{
    int max = 0,temp = 0;
    int n = 0;
    int i;
    a[1] = 1;
    //printf("%d\n",n);
    for(i=1;i<N;i++)
    {
        temp = make_list_all(i);
        if(temp > max)
        {
            max = temp;
            n = i;
        }
    }
    printf("%d %d\n",n,max);
    return 0;
}

int make_list_all(int n)
{
    double m = n;
    int count = 1;
    while(m!=1)
    {
        if(fmod(m,2) == 0)
        {
            m /= 2;
        }
        else
        {
            m = 3*m + 1;
        }
        count++;
    }
    return count;
}

int make_list(double n)
{
    double m = n;
    int temp = 1;
    if(m < M)
    {
        int x = n,y = m;
        if(a[x])
            return a[x];
        else
        {
            if(fmod(m,2) == 0)
            {
                m /= 2;
            }
            else
            {
                m = 3 * m + 1;
            }
            temp += make_list(m);
            a[y] += temp;
            return a[y];
        }
    }
    else
    {
        temp++;
        if(fmod(m,2) == 0)
        {
            m /= 2;
        }
        else
        {
            m = 3 * m + 1;
        }
        temp += make_list(m);
        return temp;
    }
}

/*int mod_3(int n)
{
    if(n == 1)
        return 0;
    else if((n-1) / 3 == 1)
        return 0;
    else if((n-1) % 3 != 0)
        return 0;
    else
        return 1;
}*/

/*int is_odd(int n)
{
    int a = (n-1) / 3;
    if((a%2) == 0)
        return 0;
    else
        return 1;
}*/
>>>>>>> a14b3b17acfec6364af21b6acf136a44e69f9657
