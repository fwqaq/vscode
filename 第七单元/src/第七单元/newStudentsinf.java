package ���ߵ�Ԫ;
/*
 * ѧ����������name���ͳɼ���score����Ϣ���ɼ��п�Ŀ��course���ͷ�����grade����Ϣ��
 * ѧ�����getResult������ʾ����ɼ���Ϣ��setData����ʵ�ֳ�ʼ��ѧ����Ϣ��
 * ��дѧ���ࣨStudent���ͳɼ��ࣨScore���������ԡ�
 */

import java.util.Scanner;

public class newStudentsinf {
    String name;
    String course;
	 int grade;
    public void getResult() {
    	System.out.println("��Ŀ�ǣ�"+course+" �����ǣ�"+grade);
    }
    public void setData() {
    	System.out.println("������������Ŀ������");
    	Scanner in = new Scanner(System.in);
    	String name1 = in.next();
    	name = name1;
    	String course1 = in.next();
    	course = course1;
    	int grade1 = in.nextInt();
    	grade = grade1;
    	
    }
}
