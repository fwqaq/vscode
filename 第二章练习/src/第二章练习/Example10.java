package µÚ¶þÕÂÁ·Ï°;

import java.util.Scanner;

public class Example10 {
	public static void main(String[] args) {
		int month;
		Scanner in = new Scanner(System.in);
		month = in.nextInt();
		if(month%12>=0&&month%12<=2)
			System.out.println("¶¬¼¾");
		else if(month>=3&&month<=5)
			System.out.println("´º¼¾");
		else if(month>=6&&month<=8)
			System.out.println("ÏÄ¼¾");
		else if(month>=9&&month<=11)
			System.out.println("Çï¼¾");
		/*
		switch (month/3){
		case 0: System.out.println("ÕâÊÇ¶¬¼¾");
		case 1: System.out.println("ÕâÊÇ´º¼¾");
		case 2: System.out.println("ÕâÊÇÏÄ¼¾");
		case 3:System.out.println("ÕâÊÇÇï¼¾");
		default: System.out.println("ÕâÊÇ¶¬¼¾");
		}*/
	}
}
