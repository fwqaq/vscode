package ���ĵ�Ԫ;

import java.util.Scanner;

public class ������������ {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=(int)(Math.random()*100);
		int i;
		int j=0;
		Scanner in  = new Scanner(System.in);
		i = in.nextInt();
		int a = 1;
		while (a<=5) {
			if(i==x)
			{
				System.out.println("��ϲ�������");
				j=1;
				break;
			}
			if(i>x)
			{
				System.out.println("���´��ˣ�����������һ������");
				i = in.nextInt();
			}
			if(i<x)
			{
				System.out.println("����С�ˣ�����������һ������");
				i = in.nextInt();
			}
			a++;
		}
		if(j!=1)
			System.out.println("sorry,��û�л�����");
	}

}
