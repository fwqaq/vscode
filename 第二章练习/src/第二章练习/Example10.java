package �ڶ�����ϰ;

import java.util.Scanner;

public class Example10 {
	public static void main(String[] args) {
		int month;
		Scanner in = new Scanner(System.in);
		month = in.nextInt();
		if(month%12>=0&&month%12<=2)
			System.out.println("����");
		else if(month>=3&&month<=5)
			System.out.println("����");
		else if(month>=6&&month<=8)
			System.out.println("�ļ�");
		else if(month>=9&&month<=11)
			System.out.println("�＾");
		/*
		switch (month/3){
		case 0: System.out.println("���Ƕ���");
		case 1: System.out.println("���Ǵ���");
		case 2: System.out.println("�����ļ�");
		case 3:System.out.println("�����＾");
		default: System.out.println("���Ƕ���");
		}*/
	}
}
