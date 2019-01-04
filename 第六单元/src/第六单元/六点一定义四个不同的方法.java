package 第六单元;

import java.util.Scanner;

public class 六点一定义四个不同的方法 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       juxing();
       System.out.println(getnumber());
       MNjuxing(5,5);
       System.out.println(avg(3,4,5));
	}
public static void juxing()
     {
    	 for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				System.out.print("*\t");
			}
			System.out.println();
		}
     }
public static int getnumber()
{
	Scanner in = new Scanner(System.in);
	int a = in.nextInt();
	return a;
}
public static void MNjuxing(int M,int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			System.out.print("O\t");
		}
		System.out.println();
	}
}
public static double avg(int a,int b,int c)
{
	return (a+b+c)/3.0;
}
}
