package ��������ҵ;

public class example07 {
public static void main(String[] args) {
	StringBuffer sb = new StringBuffer();
	sb.append("ni hao wo zai shan ke da");
	sb.replace(0, 2, "abc");//�滻
	sb.reverse();//��ת��ʽ
	sb.setCharAt(0, 'a');//�޸�ָ�������ϵ��ַ�
	System.out.println(sb.substring(5));
}
}
