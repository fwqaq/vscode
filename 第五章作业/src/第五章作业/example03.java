package ��������ҵ;

public class example03 {
public static void main(String[] args) {
	String str = "sdhk.sld.dfj ";
	String name[] = str.split(".");//�ַ�����ȡ��
	System.out.println(str.toUpperCase());//ת��Ϊ��д
	System.out.println(str.toLowerCase());//ת��ΪСд
	System.out.println(str.length());//��ȡ�ַ�������
	System.out.println(str.charAt(0));//����ָ��������ֵ
	System.out.println(str.trim());//ȥ����λ�Ŀո�
	char []name1 = str.toCharArray();//���ַ���ת��Ϊ�ַ�����
	str.equals("askf");//�Ƚ������ַ����Ƿ���ͬ
	
}
}
