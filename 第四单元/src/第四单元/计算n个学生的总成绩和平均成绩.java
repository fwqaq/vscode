package ���ĵ�Ԫ;

import java.util.Scanner;

public class ����n��ѧ�����ܳɼ���ƽ���ɼ� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int n;
	     int sum=0;
	     int score;
	     System.out.println("����ѧ����������n:");
	     Scanner in = new Scanner(System.in);	 
	     n = in.nextInt();
	     if(n>0)
	     {    int i=1;
	    	 while(i<=n) {
	    		 score = in.nextInt();
	    		 sum=sum+score;
	    		 i++;
	    	 }
	    	 System.out.println(n+"��ѧ���ܳɼ��ǣ�"+sum);
	    	 System.out.println(n+"��ѧ��ƽ���ɼ��ǣ�"+sum/n);
	     }
	     else {
	    	 System.out.println("ѧ������������Ϊ����");
	     }
	}

}
