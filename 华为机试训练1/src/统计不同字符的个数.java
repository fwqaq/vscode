import java.util.HashSet;
import java.util.Scanner;

public class 统计不同字符的个数 {
public static void main(String[] args) {
	String str;
	Scanner in = new Scanner(System.in);
	str = in.nextLine();
	int sum = 0;
	HashSet<String> set = new HashSet();
	
	for (int i = 0; i < str.length(); i++) {
		if((int)str.charAt(i)>=0&&(int)str.charAt(i)<=127)
			{
			
			String a;
			a = str.substring(i, i+1);
			set.add(a);
			}
	}
	System.out.println(set.size());
}
}
