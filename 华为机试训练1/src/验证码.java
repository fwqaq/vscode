import java.util.Random;
import java.util.Scanner;

public class 验证码 {
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
			 System.out.println("验证成功");
			 break;
		 }
		 else {
			 System.out.println("验证码输入错误，请重新输入");
		 }
	 }while(!str.equals(input));
	//用户输入的验证码
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
