package ���嵥Ԫ;

import java.util.Scanner;

public class �����Ǹ������洢����ͬ�����������ʮ���� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     int []a;
   
     Scanner in = new Scanner(System.in);
     a = new int[10];
     int m=0;
     for (int i = 0; i < a.length; i++) {
    	 int x;
    	 x = in.nextInt(); 
    	 int b=1;
		   for(int j = 0; j < i; j++)
		   {
			  
			   if(x == a[j])
			   {
				   b=0;
				   break;
			   }
		   }
		   if(b==1)
		   {
			   a[m] = x;
			   m++;
		   }
	}
     
     for (int i = 0; i < a.length; i++) {
		System.out.println(a[i]);
	}
	}

}
