package 第八章;
/*统计字符大小写个数
 * */
import java.util.Scanner;

public class 统计字符串中大小写的个数 {
public static void main(String[] args) {
	String m;
	int a = 0;
	int A = 0;
	
	Scanner in = new Scanner(System.in);
	m = in.next();
	for (int i = 0; i < m.length(); i++) {
		if(m.charAt(i)>=97&&m.charAt(i)<=(97+26))
		{
			a++;
		}
		else {
			A++;
		}
	}
	System.out.println("小写个数："+a);
	System.out.println("大写个数："+A);
  int i=65;
  String p =i+" ";
  System.out.println(p);
}
}
