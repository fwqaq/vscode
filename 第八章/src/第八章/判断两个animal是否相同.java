package �ڰ���;
/*
 * 8.�ж�����Animal(������ɫ����������������)�����Ƿ���ͬ��
 * ���ǵıȽϹ���Ϊ��ֻҪ����һ�������ж�����������ͬ��
 */
public class �ж�����animal�Ƿ���ͬ {
public static void main(String[] args) {
	animals number1 = new animals();
	animals number2 = new animals();
	number1.animals("����", "��ɫ", "����");
    number2.animals("����", "��ɫ", "����");
    boolean like = number1.name.equals(number2.name);
    System.out.println(like);
}
}
