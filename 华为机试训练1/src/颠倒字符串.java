import java.util.Scanner;

public class �ߵ��ַ��� {
public static void main(String[] args) {
	/*
	 * ��Ŀ����
		��һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ���
		 �磺���롰I am a student���������tneduts a ma I����
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
