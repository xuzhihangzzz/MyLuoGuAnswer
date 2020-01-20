#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> qu;
	bool isInQu[2000]={false};//bool类型的数组，一个数在队列里，就让该下标元素为true 
	int i,j,M,N;
	int find=0;
	int wenzhang[2000];
	cin>>M>>N; //内存容量  文章的长度
	//第二行为N个非负整数，按照文章的顺序，每个数代表一个英文单词。
	for(i=0;i<N;i++)
	{
		cin>>wenzhang[i];
		if(isInQu[wenzhang[i]])//单词在内存里 
		{
			continue;
		}
		else//单词不在内存中
		{
			if(qu.size()>M-1)//单词不在内存中且内存满了
			{
				isInQu[qu.front()]=false;
				qu.pop();//最早进入内存的那个单词出队列,且该下标元素变为false
				qu.push(wenzhang[i]);//加入新单词 
				isInQu[qu.back()]=true;
				find++;
			}
			else//单词不在内存中且内存没满 
			{
				qu.push(wenzhang[i]);//将新单词存入一个未使用的内存单元
				isInQu[qu.back()]=true;
				find++;
			}
		}
	}
	cout<<find<<endl;
	return 0;
}
