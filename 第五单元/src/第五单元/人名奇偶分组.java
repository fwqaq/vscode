package ���嵥Ԫ;

import java.util.Scanner;

public class ������ż���� {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       String []name;
       int number;
       System.out.println("������������");
       Scanner in = new Scanner(System.in);
       number = in.nextInt();
       name = new String[number];
       System.out.println("����ÿ���˵�����");
       for (int i = 0; i < name.length; i++) {
		name[i] = in.next();		
	}
       String []name1;//�����������ֱ���
       String []name2;//ż���������ֱ���
       name1 = new String[number-number/2];
       name2 = new String[number/2];
       int j=0;
       int x=0;
       for (int i = 0; i < name.length; i++) {
		if((i+1)%2==0)
		{
			name2[j] = name[i];
			j++;
		}
		else {
			name1[x] = name[i];
			x++;
		}
		}
		System.out.println("���ż����������");
		for (int k = 0; k < name2.length; k++) {
			System.out.println(name2[k]);
		}
		System.out.println("���������������");
		for (int k = 0; k < name1.length; k++) {
			System.out.println(name1[k]);
		}
		
	}
}