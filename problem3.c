/*求这个大数的最大素因子  Largest prime factor
* @author liamlee
* @date   2012-04-22
*/

#include<stdio.h>
#include<math.h>
#define N 600851475143
#define M 987654321

int main()
{
    int i = 3;
    long long n = M;
    long long m = sqrt(n);
    while(n > 1 && i <= m)
    {
        if(n % i == 0)
        {
           // n /= i;
            printf("%d\t%lld\n",i,n);
            while(n % i == 0)
            {
                n /= i;
            }
            m = sqrt(n);
        }
        i += 2;
    }
    if(n != 1)
    {
       printf("%d\n",n);
    }
}

