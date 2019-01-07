import java.util.Scanner;

public class 最小公倍数 {
public static void main(String[] args) {
	/*
	 * 正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，
	 * 设计一个算法，求输入A和B的最小公倍数。
	 */
	int a,b;
	java.util.Scanner in = new Scanner(System.in);
	a = in.nextInt();
	b = in.nextInt();
	int max = a>b ? b : a;
	for(int i = max;;i++) {
		if(i%a == 0&&i%b == 0) {
			System.out.println(i);
			break;
		}
	}
	
	}
}
