package ���嵥Ԫ;

import java.util.Scanner;

public class ��ά������� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       int [][]two;
       int hang;
       int lie;
        Scanner in = new Scanner(System.in);
    	System.out.println("�����ά�������");
    	hang = in.nextInt();
    	System.out.println("�����ά�������");
    	lie = in.nextInt();
    	two = new int[hang][lie];
    	System.out.println("�����ά�����������");
    	for(int i = 0; i < hang; i++)
    	{
    		for(int j = 0; j < lie; j++)
    		{
    			two[i][j] = in.nextInt();
    		}
    	}
    	int sum=0;
    	for(int i = 0; i < hang; i++)
    	{
    		for(int j = 0; j < lie; j++)
    		{
    			sum = sum + two[i][j];
    		}
    	}
    	
    	System.out.println("��ά����ĺ��ǣ�"+sum);
	}

}
