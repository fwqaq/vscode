package 第四单元;

import java.util.Scanner;

public class 矩形用星号组成 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
   int a;
   int b;
   System.out.println("请输入所组成的矩形所用的*长和宽");
   Scanner in = new Scanner(System.in);
   a = in.nextInt();
   b = in.nextInt();
   int i=1;
   int j;
   while(i<=b)
   {  j=1;
	   while(j<=a)
	   {
		   System.out.print("*");
		   j++;
	   }
	    i++;
	    System.out.println("");
   }
	}

}
