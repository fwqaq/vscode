package ������;

import java.util.Scanner;

public class �����λ���� {

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
	System.out.println("a�İ�λ���ǣ�"+(a/100)); 
	if(b /100 >0)
		System.out.println("b�İ�λ���ǣ�"+(b/100));
   }
   else 
	   {if(b /100 >0)
	   System.out.println("b�İ�λ���ǣ�"+(b/100));
	   else System.out.println("ab֮��Ϊ��"+(a+b));
   
   }

}
}
