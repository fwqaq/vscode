package ���ߵ�Ԫ;

import java.util.Scanner;

/*
 * 3.��д����ģ�������˻����ܡ�Ҫ�����£�
���ԡ��˺š�������������ַ���������С��
��������ȡ���ѯ�������û�������ʾ���������Ϣ��
�����������ʾ����ԭ�������մ��������մ����
ȡ��ʱ����������С����С���ܾ��տ����ʾ�����ٱ������XXX��
 */
public class yinhang {
      int number;
      String name;
      String address;
      int shengyu;
      int minshengyu;
      public void yinhang (int number1,String name1,String address1,int shengyu1,int minshengyu1)
      {   number = number1;
          name = name1;
          address = address1;
          shengyu = shengyu1;
          minshengyu  = minshengyu1;
    	  
      }
      public void putmoney()//���
      {
    	  System.out.println("������Ĵ������");
    	  int number;
    	  Scanner in = new Scanner(System.in);
    	  number = in.nextInt();
    	  if(number <100)
    	  System.out.println("�������������100Ԫ");
    	  else {
    		  shengyu = shengyu +number;
    		  System.out.println("����ɹ�");
    	  }
    	  
      }
      public void getmoney()
      {   Scanner in = new Scanner(System.in);
    	  System.out.println("��������Ҫȡ����money");
    	  int number;
    	  number = in.nextInt();
    	  if(shengyu-number>minshengyu)
    	  {
    		  shengyu = shengyu - number;
    		  System.out.println("ȡ��ɹ�");
    	  }
    	  else {
    		  System.out.println("����Ǯ�����ˣ���ֻ��ȡ��"+(shengyu-minshengyu)+"ֻҪҪ����"+minshengyu);
    	  }
      }
      public void getinfo() {
    	  System.out.println(number);
    	  System.out.println(name);
    	  System.out.println(address);
    	  System.out.println(shengyu);
    	  System.out.println(minshengyu);
      }
}
