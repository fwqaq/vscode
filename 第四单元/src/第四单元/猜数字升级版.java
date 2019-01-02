package 第四单元;

import java.util.Scanner;

public class 猜数字升级版 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=(int)(Math.random()*100);
		int i;
		int j=0;
		Scanner in  = new Scanner(System.in);
		i = in.nextInt();
		int a = 1;
		while (a<=5) {
			if(i==x)
			{
				System.out.println("恭喜您答对了");
				j=1;
				break;
			}
			if(i>x)
			{
				System.out.println("您猜大了，请重新输入一个数字");
				i = in.nextInt();
			}
			if(i<x)
			{
				System.out.println("您猜小了，请重新输入一个数字");
				i = in.nextInt();
			}
			a++;
		}
		if(j!=1)
			System.out.println("sorry,您没有机会了");
	}

}
