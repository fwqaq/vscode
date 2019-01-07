

import java.util.Scanner;

public class 字符串最后一个单词的长度 {
public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	String name;
	 name = in.nextLine();
	 String arr[] = name.split(" ");
	 System.out.println(arr[arr.length-1].length());
}
}
