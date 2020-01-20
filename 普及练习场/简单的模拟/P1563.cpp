#include<iostream>
using namespace std;
struct toy
{
	int face;
	string name;
};
struct toy a[500000];//数组开小了会有测试点RE 
int main()
{
	int i,n,m,ai,si;
	int x=1;
	cin>>n>>m;//小人的个数和指令的条数
	for(i=1;i<=n;i++)
	{
		cin>>a[i].face>>a[i].name;
	}
	for(i=1;i<=m;i++)
	{
		cin>>ai>>si;
		if(ai==a[x].face)//往左数 
		{
			x=x-si;
			if(x<=0)
			{
				x=x+n;
			}
		}
		else//往右数 
		{
			x=x+si;
			if(x>n)
			{
				x=x-n;
			}
		}
	}
	cout<<a[x].name<<endl;
	return 0;
}
