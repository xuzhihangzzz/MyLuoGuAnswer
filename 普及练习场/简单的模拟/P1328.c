#include<stdio.h>
int a[201],b[201];
int main()
{
	//0表示“剪刀”，1表示“石头”，2 表示“布”，3 表示“蜥蜴人”，4表示“斯波克”。 
	int i,N,NA,NB,x,y;
	int scoreA=0,scoreB=0;
	scanf("%d %d %d",&N,&NA,&NB);	//分别表示共进行N次猜拳，小A出拳的周期长度，小B出拳的周期长度。
	
	for(i=0;i<NA;i++)
	{
		scanf("%d",&a[i]);			//第二行包含NA个整数,表示小A出拳的规律
	}
	
	for(i=0;i<NB;i++)
	{
		scanf("%d",&b[i]);			//第三行包含NB个整数,表示小B出拳的规律
	}
	x=0,y=0,scoreA=0,scoreB=0;
	for(i=0;i<N;i++)
	{
		//判断谁赢，谁就加一分
		if(a[x]==0 && b[y]==1)
			scoreB++;
		if(a[x]==0 && b[y]==2)
			scoreA++;
		if(a[x]==0 && b[y]==3)
			scoreA++;
		if(a[x]==0 && b[y]==4)
			scoreB++;
		if(a[x]==1 && b[y]==0)
			scoreA++;
		if(a[x]==1 && b[y]==2)
			scoreB++;
		if(a[x]==1 && b[y]==3)
			scoreA++;
		if(a[x]==1 && b[y]==4)
			scoreB++;
		if(a[x]==2 && b[y]==0)
			scoreB++;
		if(a[x]==2 && b[y]==1)
			scoreA++;
		if(a[x]==2 && b[y]==3)
			scoreB++;
		if(a[x]==2 && b[y]==4)
			scoreA++;	
		if(a[x]==3 && b[y]==0)
			scoreB++;
		if(a[x]==3 && b[y]==1)
			scoreB++;
		if(a[x]==3 && b[y]==2)
			scoreA++;
		if(a[x]==3 && b[y]==4)
			scoreA++;
		if(a[x]==4 && b[y]==0)
			scoreA++;
		if(a[x]==4 && b[y]==1)
			scoreA++;
		if(a[x]==4 && b[y]==2)
			scoreB++;
		if(a[x]==4 && b[y]==3)
			scoreB++;
		x++;
		y++;
		if(x==NA)//实现循环出牌,(下标到不了NA)
			x=0;
		if(y==NB)//实现循环出牌,(下标到不了NB)
			y=0;
	}
	printf("%d %d\n",scoreA,scoreB);
	return 0;
}
