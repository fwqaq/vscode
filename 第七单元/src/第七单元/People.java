package ���ߵ�Ԫ;
/*
 * ����һ��People�࣬�����Ա�������š��������Ա����䣻  
 */
public class People {
        int number;
        String name;
        String sex;
        int age;
      public void People(int number1, String name1, String sex1, int age1)
      {
    	  number = number1;
    	  name = name1;
    	  sex = sex1;
    	  age = age1;
      }
      public void put()
      {
    	  System.out.println("ѧ�����:"+number);
    	  System.out.println("ѧ������:"+name);
    	  System.out.println("ѧ���Ա�:"+sex);
    	  System.out.println("ѧ������:"+age);
      }
}
