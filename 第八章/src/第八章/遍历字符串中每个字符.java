package 第八章;
/*
 * 3.遍历字符串中每一个字符
 */
import java.util.Scanner;

public class 遍历字符串中每个字符 {
public static void main(String[] args) {
	String  a;
	Scanner in = new Scanner(System.in);
	a = in.next();
	for (int i = 0; i < a.length(); i++) {
		System.out.println(a.charAt(i));
	}
}
}
