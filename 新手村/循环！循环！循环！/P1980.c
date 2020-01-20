/*
	题目描述
	试计算在区间1到n的所有整数中，数字 x(0 ≤ x ≤ 9)共出现了多少次？例如，在1到11中，
	即在1,2,3,4,5,6,7,8,9,10,11中，数字1出现了4次。
	
	输入格式
	2个整数n,x，之间用一个空格隔开。
	
	输出格式
	1个整数，表示x出现的次数。
	
	输入输出样例
	输入 #1
	11 1
	输出 #1
	4
*/
#include<stdio.h>
int main()
{
    int n,x,i,sum=0;
    int temp,last;
    scanf("%d %d",&n,&x);
    for(i=0;i<=n;i++)
    {
        temp=i;
        while(temp>0)
        {
            last=temp%10;//取出最后一位
            temp=temp/10;//去掉最后一位
            if(last==x)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
