/*
	题目描述
	P老师需要去商店买n支铅笔作为小朋友们参加NOIP的礼物。她发现商店一共有 33种包装的铅笔，
	不同包装内的铅笔数量有可能不同，价格也有可能不同。为了公平起 见，P老师决定只买同一种包装的铅笔。
	
	商店不允许将铅笔的包装拆开，因此P老师可能需要购买超过nn支铅笔才够给小朋 友们发礼物。
	
	现在P老师想知道，在商店每种包装的数量都足够的情况下，要买够至少nn支铅笔最少需要花费多少钱。
	
	输入格式
	第一行包含一个正整数nn，表示需要的铅笔数量。
	
	接下来三行，每行用22个正整数描述一种包装的铅笔：
	其中第11个整数表示这种 包装内铅笔的数量，第22个整数表示这种包装的价格。
	
	保证所有的77个数都是不超过1000010000的正整数。
	
	输出格式
	11个整数，表示P老师最少需要花费的钱。
	
	输入输出样例
	输入 #1
	57
	2 2
	50 30
	30 27
	输出 #1
	54
	输入 #2
	9998
	128 233
	128 2333
	128 666
	输出 #2
	18407
	输入 #3
	9999
	101 1111
	1 9999
	1111 9999
	输出 #3
	89991
*/
#include<stdio.h>
int main()
{
    int num,a1,a2,b1,b2,c1,c2;
    int a,b,c,shuliangA,moneyA,shuliangB,shuliangC,moneyB,moneyC;
    scanf("%d",&num);
    scanf("%d %d",&a1,&a2);
    scanf("%d %d",&b1,&b2);
    scanf("%d %d",&c1,&c2);
    a=num/a1;
    if(num%a1==0){
        shuliangA=a;
    }else{
        shuliangA=a+1;
    }
    moneyA=shuliangA*a2;
    
    b=num/b1;
    if(num%b1==0){
        shuliangB=b;
    }else{
        shuliangB=b+1;
    }
    moneyB=shuliangB*b2;
    
    c=num/c1;
    if(num%c1==0){
        shuliangC=c;
    }else{
        shuliangC=c+1;
    }
    moneyC=shuliangC*c2;
    
    if(moneyA<=moneyB && moneyA<=moneyC){
        printf("%d",moneyA);
    }
    if(moneyB<=moneyA && moneyB<=moneyC){
        printf("%d",moneyB);
    }
    if(moneyC<=moneyA && moneyC<=moneyB){
        printf("%d",moneyC);
    }
    return 0;
}

