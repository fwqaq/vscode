import java.util.Scanner;

public class ��С������ {
public static void main(String[] args) {
	/*
	 * ������A��������B ����С��������ָ �ܱ�A��B��������С��������ֵ��
	 * ���һ���㷨��������A��B����С��������
	 */
	int a,b;
	java.util.Scanner in = new Scanner(System.in);
	a = in.nextInt();
	b = in.nextInt();
	int max = a>b ? b : a;
	for(int i = max;;i++) {
		if(i%a == 0&&i%b == 0) {
			System.out.println(i);
			break;
		}
	}
	
	}
}
