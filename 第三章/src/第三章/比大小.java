package ������;

import java.util.Scanner;

public class �ȴ�С {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x=(int)(Math.random()*100);
		int a;
		Scanner in= new Scanner(System.in);
		a = in.nextInt();
		if(a > x)
			System.out.println("sorry,���´���!");
		if(a == x)
			System.out.println("��ϲ��������ˣ�");
		if(a < x)
			System.out.println("sorry,����С�ˣ�");
	}

}
