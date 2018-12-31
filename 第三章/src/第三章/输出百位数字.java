package 第三章;

import java.util.Scanner;

public class 输出百位数字 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
   int a;
   int b;
   Scanner in = new Scanner(System.in);
   a = in.nextInt();
   b = in.nextInt();
   int c = a + b;
   if(a /100 >0)
   {
	System.out.println("a的百位数是："+(a/100)); 
	if(b /100 >0)
		System.out.println("b的百位数是："+(b/100));
   }
   else 
	   {if(b /100 >0)
	   System.out.println("b的百位数是："+(b/100));
	   else System.out.println("ab之和为："+(a+b));
   
   }

}
}
