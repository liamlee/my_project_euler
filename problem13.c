/*
* 求一百个50位数之和的前十位
* @author liamlee
* @date   2012-04-30
*/

//思路：类似高精度加法，利用二维数组存放100个50位数字，对位想加，有进位加上进位，将结果存放在数组中
#include<stdio.h>
#include<stdlib.h>

int main()
{
    double N = 0;
    int M = 999999999;
    int sum,temp=0;
    int i,j,k,l;
    FILE *fp;
    int a[100][50];
    int b[50];

    if((fp=fopen("data.txt","r")) == NULL)
    {
        printf("Cann't find file!");
        return 0;
    }
    for(i=0;i<100;i++)
    {
        for(j=0;j<50;j++)
        {
            fscanf(fp,"%d",&a[i][j]);
        }
    }
    fclose(fp);

    for(k=49;k>=0;k--)
    {
        sum = 0;
        sum += temp;
        for(l=0;l<100;l++)
        {
            sum = sum + a[l][k];
        }
        b[k] = sum % 10;
        temp = sum / 10;
    }
    N = temp;
    i = 0;
    while(N < M)
    {
        N = N*10 + b[i++];
    }
    printf("%f",N);
    return 0;
}
