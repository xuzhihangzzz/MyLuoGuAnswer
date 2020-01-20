/*
	题目描述
	夏天到了，各家各户的用电量都增加了许多，相应的电费也交的更多了。小玉家今天收到了一份电费通知单。小玉看到上面写：据闽价电[2006]27号规定，月用电量在150千瓦时及以下部分按每千瓦时0.4463元执行，月用电量在151~400千瓦时的部分按每千瓦时0.4663元执行，月用电量在401千瓦时及以上部分按每千瓦时0.5663元执行;小玉想自己验证一下，电费通知单上应交电费的数目到底是否正确呢。请编写一个程序，已知用电总计，根据电价规定，计算出应交的电费应该是多少。
	
	输入格式
	输入一个整数，表示用电总计（单位以千瓦时计），不超过10000。
	
	输出格式
	输出一个数，保留到小数点后1位（单位以元计，保留到小数点后1位）。
	
	输入输出样例
	输入 #1
	267
	输出 #1
	121.5
*/
#include <stdio.h>
int main(){
    int a=0;
    double b=0.0;
    scanf("%d",&a);
    if(a<=150){
        b = a*0.4463;
    }else if(a>=151&&a<=400){
        b = 150*0.4463+(a-150)*0.4663;
    }else{
        b = 150*0.4463+250*0.4663+(a-400)*0.5663;
    }
    b=(int)((b*10)+0.5)/10.0;
    printf("%.1lf",b);
    return 0;
}
