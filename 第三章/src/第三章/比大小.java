package 第三章;

import java.util.Scanner;

public class 比大小 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=(int)(Math.random()*100);
		int a;
		Scanner in= new Scanner(System.in);
		a = in.nextInt();
		if(a > x)
			System.out.println("sorry,您猜大了!");
		if(a == x)
			System.out.println("恭喜您，答对了！");
		if(a < x)
			System.out.println("sorry,您猜小了！");
	}

}
