package ������;

import java.util.Scanner;

public class ���ݸı� {
public static void main(String[] args) {
	int x;
	Scanner in = new Scanner(System.in);
	x = in.nextInt();
	int []xx = new int[4];
	for (int i = 0; i < xx.length; i++) {
		xx[i] = x%10+5%10;
		x = x/10;
		System.out.println(x%10+5%10);
	}
	
}
}
