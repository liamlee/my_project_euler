<<<<<<< HEAD
/*求两个三位数积中最大的回文数   Largest palindrome product
* @author liamlee
* @date   2012-03-05
*/

#include<stdio.h>
#include<math.h>
int palindromic(int);
int main()
{
    int x = 999;
    int y = 999;
    int temp = 0;
    int p = 0;
    for(x=999;x>=100;x--)
    {
        for(y=x;y>=100;y--)
        {
            temp = x * y;
            if(palindromic(temp))
            {
                if(temp > p)
                    p = temp;
            }
        }
    }
    printf("%d\n",p);
    return 0;
}

int palindromic(int a)
{
    int m = a;
    int b = 0;
    int i;
    while(a)
    {
        i = a % 10;
        b = b * 10 + i;
        a /= 10;
    }
    if(m == b)
        return 1;
    else
        return 0;
}
=======
/*求两个三位数积中最大的回文数   Largest palindrome product
* @author liamlee
* @date   2012-03-05
*/

#include<stdio.h>
#include<math.h>
int palindromic(int);
int main()
{
    int x = 999;
    int y = 999;
    int temp = 0;
    int p = 0;
    for(x=999;x>=100;x--)
    {
        for(y=x;y>=100;y--)
        {
            temp = x * y;
            if(palindromic(temp))
            {
                if(temp > p)
                    p = temp;
            }
        }
    }
    printf("%d\n",p);
    return 0;
}

int palindromic(int a)
{
    int m = a;
    int b = 0;
    int i;
    while(a)
    {
        i = a % 10;
        b = b * 10 + i;
        a /= 10;
    }
    if(m == b)
        return 1;
    else
        return 0;
}
>>>>>>> a14b3b17acfec6364af21b6acf136a44e69f9657
