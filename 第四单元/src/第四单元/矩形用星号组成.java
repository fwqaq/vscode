package ���ĵ�Ԫ;

import java.util.Scanner;

public class �������Ǻ���� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
   int a;
   int b;
   System.out.println("����������ɵľ������õ�*���Ϳ�");
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
