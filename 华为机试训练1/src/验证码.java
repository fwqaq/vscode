import java.util.Random;
import java.util.Scanner;

public class ��֤�� {
public static void main(String[] args) {
	String str;
	String input;
	 Scanner in = new Scanner(System.in);
	 do {
		  str = yzmput();
		 System.out.println(str);
		 input = in.next();
		 if(str.equals(input))
		 {
			 System.out.println("��֤�ɹ�");
			 break;
		 }
		 else {
			 System.out.println("��֤�������������������");
		 }
	 }while(!str.equals(input));
	//�û��������֤��
}
public static String yzmput()
{
	Random R = new Random();
	String str="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	StringBuffer a;
	a = new StringBuffer();
	
	for (int i = 0; i < 4; i++) {
	int b = R.nextInt(62)+1;
	a.append(str.charAt(b));
	}
	return a.toString();
}
}
