package ������;

import java.util.Scanner;

public class ��λ�� {//����ѭ��ȥ���

	public static void main(String[] args) {
		// TODO Auto-generated method stub
  int number;
  int c;
  Scanner input =new Scanner (System.in);
  number = input.nextInt();
  int number1;
  number1=number;
  if(number/10==0)
	    {System.out.println("��λ��");
	    c=1;}
  else if(number/100==0)
        {System.out.println("��λ��");
        c=2;}
  else if(number/1000==0)
	    {System.out.println("��λ��");
	    c=3;}
  else if(number/10000==0)
	    {System.out.println("��λ��");
	    c=4;}
  else if(number/100000==0)
	    {System.out.println("��λ��");
	    c=5;}
  if(number/10000>=0)
  { System.out.println("��λ�ǣ�"+(number/10000));
  number=number%10000;
  }
  if(number/1000>=0)
  { System.out.println("ǧλ�ǣ�"+(number/1000));
  number=number%1000;
  }
  if(number/100>=0)
	  {System.out.println("��λ�ǣ�"+(number/100));
	  number=number%100;
	  }
  if(number/10>=0)
	  System.out.println("ʮλ�ǣ�"+(number/10));
      System.out.println("��λ�ǣ�"+(number%10)); 
  if(number1/10000>0)
  {
	  System.out.println(number1%10);
	  number1=number1/10;
  }
	  
  if(number1/1000>0)
  {
	  System.out.println(number1%10);
	  number1=number1/10;
  }
  if(number1/100>=0)
  {
	  System.out.println(number1%10);
	  number1=number1/10;
  }
  if(number1/10>0)
  {
	  System.out.println(number1%10);
	  number1=number1/10;
  }
	  System.out.println(number1);
      
	}
	
		

}
