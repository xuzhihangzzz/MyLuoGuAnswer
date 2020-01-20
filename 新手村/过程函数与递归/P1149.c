/*
题目描述
给你n根火柴棍，你可以拼出多少个形如“A+B=C”的等式？等式中的A、B、C是用火柴棍拼出的整数
（若该数非零，则最高位不能是0）。用火柴棍拼数字0-9的拼法如图所示：

注意：

加号与等号各自需要两根火柴棍
如果A≠B，则A+B=C与B+A=C视为不同的等式(A,B,C>=0)
n根火柴棍必须全部用上

输入格式
一个整数n(n<=24)。

输出格式
一个整数，能拼成的不同等式的数目。

输入输出样例
输入 #1
14
输出 #1
2
输入 #2
18
输出 #2
9
*/
#include<stdio.h>
#include<string.h>
int a[10] = {6,2,5,5,4,5,6,3,7,6};//一位数所用的火柴数
int shu(int num)		//返回一个数所需的火柴数 
{
	int temp,k=0;
	temp=num;
	while(temp)
	{
		k=k+a[temp%10];	//num%10：取末尾的数； a[num%10]：该数对应的火柴数 
		temp=temp/10;
	}
	if(num==0)
	{
		k=k+a[0];
	}
	return k; 
}
int main() 
{
	int n,i,j,k;
	int jia = 2;
	int deng = 2;
	int sum = 0;
	scanf("%d",&n);
	//24根火柴，最大为999 
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1000;j++)
		{
			if(shu(i)+shu(j)+shu(i+j)+jia+deng==n) 
			{
				sum++;
			}
		}
	}
	printf("%d",sum);
	return 0;
}

