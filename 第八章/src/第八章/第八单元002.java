package �ڰ���;

import java.util.Scanner;
/*
 * 2.����ָ�������й����ֶ��ٸ���ĸa��
 * �����a��ͷ����ɾ����ͷ��a�������ȫ��ת��Ϊe��
 * ��startWith�� ������ֵ��Boolean�ͣ��ж��Ƿ��Ǹ����ַ���ͷ�ġ�
 * */
public class �ڰ˵�Ԫ002 {
public static void main(String[] args) {
	String mmmm;
	int x=0;
	Scanner in = new Scanner(System.in);
	mmmm = in.next();
	if(mmmm.startsWith("a"))//�����һ���Ƿ��ǡ�a��;
	{
	mmmm=mmmm.substring(1, mmmm.length());
	 x++;
	}
	char []cs = mmmm.toCharArray();//���ַ��������ַ�������
	if(cs[0]==0)
		cs[0] = ' ';
	for (int i = 0; i < cs.length; i++) {
		if(cs[i]=='a')
			{cs[i] = 'e';
		      x++;
		      }
	}
	String m = new String(cs);//���ַ�����ֵ���µ��ַ������飻
	System.out.println("���й���"+x+"��a");

	System.out.println(m);
}
}
