package �ڰ���;
/*ͳ���ַ���Сд����
 * */
import java.util.Scanner;

public class ͳ���ַ����д�Сд�ĸ��� {
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
	System.out.println("Сд������"+a);
	System.out.println("��д������"+A);
  int i=65;
  String p =i+" ";
  System.out.println(p);
}
}
