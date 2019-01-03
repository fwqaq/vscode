package 第五单元;

import java.util.Scanner;

public class 整型数组中所有偶数的和 {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
      int number;
      Scanner in = new Scanner ( System.in);
      System.out.print("输入int型数组的元素个数：");
      number = in.nextInt();
      int []intshuzu;
      intshuzu = new int[number];
      System.out.println("输入int型数组中"+number+"个元素：");
      for(int i = 0; i < number; i++)
      {
    	  intshuzu[i] = in.nextInt();
      }
      int sum=0;//计算数组中的偶数的值
      for (int i = 0; i < intshuzu.length; i++) {
		    if(intshuzu[i]%2==0)
		    {
		    sum = sum + intshuzu[i];
		    }
	}
      System.out.println("数组中所有偶数之和是："+sum);
	}

}
