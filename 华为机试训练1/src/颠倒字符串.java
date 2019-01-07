import java.util.Scanner;

public class 颠倒字符串 {
public static void main(String[] args) {
	/*
	 * 题目描述
		将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。
		 如：输入“I am a student”，输出“tneduts a ma I”。
	 */
	String str ;
	Scanner in = new Scanner(System.in);
	str = in.nextLine();
	String str1 = "";
	char[] array = str.toCharArray();
	for(int i = array.length-1;i>=0;i--) {
		str1 = str1+array[i];
	}
	System.out.println(str1);
}
}
