package �ڰ���;

import java.util.Scanner;

public class ���ַ�������ĸ���д������Сд {
public static void main(String[] args) {
	String b;
	Scanner in = new Scanner(System.in);
	b = in.next();
    b = b.toLowerCase();//ȫ��ת��ΪСд
    int a;
    a = (b.charAt(0));//ǿ��ת��������ĸ���벢���д
    char c = (char) (a-32);
    char []shuzhu = b.toCharArray();//���ַ�����Ϊ�ַ�����
    shuzhu[0] = c;
   String d = new String(shuzhu);//�������Ϊ�ַ���
    System.out.println(d);
}
}
