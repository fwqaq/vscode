package ���嵥Ԫ;

import java.util.Scanner;

public class ��������������ż���ĺ� {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
      int number;
      Scanner in = new Scanner ( System.in);
      System.out.print("����int�������Ԫ�ظ�����");
      number = in.nextInt();
      int []intshuzu;
      intshuzu = new int[number];
      System.out.println("����int��������"+number+"��Ԫ�أ�");
      for(int i = 0; i < number; i++)
      {
    	  intshuzu[i] = in.nextInt();
      }
      int sum=0;//���������е�ż����ֵ
      for (int i = 0; i < intshuzu.length; i++) {
		    if(intshuzu[i]%2==0)
		    {
		    sum = sum + intshuzu[i];
		    }
	}
      System.out.println("����������ż��֮���ǣ�"+sum);
	}

}
