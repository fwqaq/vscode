package ���ĵ�Ԫ;

import java.util.Scanner;

public class ����1����n��ƽ����� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("����sum=1/(1*1)+1/(2*2)+.....+1/(n*n)");
       int i;
       int j=1;
       Scanner in = new Scanner(System.in);
       System.out.println("��������n�����ֵ��");
       i = in.nextInt();
       double sum=0.0;
       while(j<=i)
       {
    	   sum=sum+1.0/(j*j);
    	   j++;
       }
       System.out.println(sum);
	}

}
