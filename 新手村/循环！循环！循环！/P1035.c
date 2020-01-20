/*
题目描述
已知：Sn= 1+1/2+1/3+…+1/n。显然对于任意一个整数k，当n足够大的时候，Sn>k。 
现给出一个整数k，要求计算出一个最小的n，使得 Sn>k。
 
输入格式
一个正整数k。

输出格式
一个正整数n。

输入输出样例
输入 #1
1
输出 #1
2
*/
#include<stdio.h>
int main()
{
    int k,n,i;
    double Sn=0.000000;
    scanf("%d",&k);
    for(i=1;i<999999999;i++)
    {
        Sn=Sn+(1.0/i);
        if(Sn>k)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}

