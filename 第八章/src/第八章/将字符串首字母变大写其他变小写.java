package 第八章;

import java.util.Scanner;

public class 将字符串首字母变大写其他变小写 {
public static void main(String[] args) {
	String b;
	Scanner in = new Scanner(System.in);
	b = in.next();
    b = b.toLowerCase();//全部转换为小写
    int a;
    a = (b.charAt(0));//强制转换把首字母分离并变大写
    char c = (char) (a-32);
    char []shuzhu = b.toCharArray();//将字符串变为字符数组
    shuzhu[0] = c;
   String d = new String(shuzhu);//将数组变为字符串
    System.out.println(d);
}
}
