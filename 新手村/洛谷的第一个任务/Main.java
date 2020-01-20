/*
	题目描述
	伦敦奥运会要到了，小鱼在拼命练习游泳准备参加游泳比赛，
	可怜的小鱼并不知道鱼类是不能参加人类的奥运会的。
	这一天，小鱼给自己的游泳时间做了精确的计时（本题中的计时都按24小时制计算），
	它发现自己从a时b分一直游泳到当天的c时d分，     
	请你帮小鱼计算一下，它这天一共游了多少时间呢？
	小鱼游的好辛苦呀，你可不要算错了哦。
	
	输入格式
	一行内输入 4 个整数，分别表示 a, b, c, d。
	
	输出格式
	一行内输出 2 个整数 e 和 f，用空格间隔，依次表示小鱼这天一共游了多少小时多少分钟。
	其中表示分钟的整数 f 应该小于60。
*/
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        
        int cha = (c*60+d)-(a*60+b);
        int hours = cha/60;
        int mintes = cha%60;
        System.out.println(hours+" "+mintes);
    }
}
