/*
	同学们在教室中坐成了M行N列，坐在第i行第j列的同学的位置是(i,j)
	为了方便同学们进出，在教室中设置了K条横向的通道，L条纵向的通道
*/

#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
struct zb
{
	int x;
	int y;
	int p;
	int q;
};
struct zb a[10000];
int main()
{
	int i,j,M,N,K,L,D;
	int b[5000];
	int c[5000]; 
	scanf("%d %d %d %d %d",&M,&N,&K,&L,&D);//第一行，有5个用空格隔开的整数，分别是M,N,K,L,D
	/*接下来的D行，每行有4个用空格隔开的整数。第i行的4个整数Xi,Yi,Pi,Qi
	表示坐在位置 (Xi,Yi)与(Pi,Qi)的两个同学会交头接耳（输入保证他们前后相邻或者左右相邻）*/
	for(i=1;i<=D;i++)
	{
		scanf("%d %d %d %d",&a[i].x,&a[i].y,&a[i].p,&a[i].q);
	}
	
	for(i=1;i<=D;i++)
	{
		if(a[i].x!=a[i].p) 
		{
			b[min(a[i].x,a[i].p)]++; 
		}
		else if(a[i].y!=a[i].q) 
		{
			c[min(a[i].y,a[i].q)]++;
		}
	}
	
	for(i=1;i<=M;i++)
	{
		if(b[i]!=0)
			cout<<i<<" ";
	}
	cout<<endl;
	for(i=1;i<=N;i++)
	{
		if(c[i]!=0)
			cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
