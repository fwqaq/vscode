package ���ߵ�Ԫ;

import java.util.Scanner;

/*
 * 6.����Patient���ʾ�������еĲ���,
 * �������Ӧ����name(a string),sex(a char),age(an integer),
 * weight(a float),allergies(a boolean).
 * ������ȡ���޸ķ���.��һ������������,�������Է���,����������patient����,
 * ������״̬������Ϣ��ʾ�ڿ���̨��
 * 
 * */
public class Patient{
     String name;//��������
     String sex;//�����Ա�
     int age;//��������
     double weight;//��������
     boolean allergies;//�����Ƿ����
     
     public void Patient(String name1,String sex1, int age1, double weight1,boolean allergies1)
     { name = name1;
     sex = sex1;
     age = age1;
     weight = weight1;
     allergies = allergies1;
     }
     
     public void adupt() {
    	 System.out.println("��������Ҫ�޸ĵ���");
    	 System.out.println("1............����");
    	 System.out.println("2............�Ա�");
    	 System.out.println("3............����");
    	 System.out.println("4............����");
    	 System.out.println("5..........����ʷ");
    	 System.out.println("0............�˳�");
    	 Scanner in = new Scanner (System.in);
    	 int i = in.nextInt();
      while(i!=0)
             {
	   switch(i){
		   case 1:
			 String  name1 = in.next();name = name1; break;
		   case 2:
			 String  sex1 = in.next();sex = sex1; break;
		   case 3:
			 int age1 = in.nextInt();age = age1; break;
		   case 4:
			 int weight1 = in.nextInt();weight = weight1; break;
		   case 5:
			  boolean allergies1 = in.nextBoolean(); allergies = allergies1; break;
	             }
                }
            }
     
     public void put() {
    	 System.out.println("--------������Ϣ--------");
    	 System.out.println("-------����"+"  "+name+"-----");
    	 System.out.println("-------�Ա�"+"  "+sex+"-----");
    	 System.out.println("-------����"+"  "+age+"-----");
    	 System.out.println("-------����"+"  "+weight+"-----");
    	 if(allergies)
    	 System.out.println("-------����ʷ"+" "+"��"+"-----");
    	 else  System.out.println("-------����ʷ"+" "+"��"+"-----");
     }
}
