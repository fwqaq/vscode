package ���嵥Ԫ;

import java.util.Random;
import java.util.Scanner;

public class ������ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     String [] name;
     System.out.print("����༶����������");
     Scanner in = new Scanner( System.in);
     int number = in.nextInt();
     name = new String[number];
     int i=0;
     System.out.println("����༶"+number+"��ÿ���˵�����");
     for(i=0;i<number;i++)
     {
    	 name[i] = in.next();
     }
    Random r = new Random();
    int suiji = r.nextInt(number);
    System.out.println("ȫ����������");
    for (int j = 0; j < name.length; j++) {
		System.out.print(name[j]+"\t");
		if((j+1)%(number/2)==0)
		{
			System.out.println("");
		}
	}
    System.out.println("��������ȡ������");
    System.out.print(name[suiji]);
     
	}

}
