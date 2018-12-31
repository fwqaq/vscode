package 第三章;

import java.util.Scanner;

public class 五位数 {//不用循环去解决

	public static void main(String[] args) {
		// TODO Auto-generated method stub
  int number;
  int c;
  Scanner input =new Scanner (System.in);
  number = input.nextInt();
  int number1;
  number1=number;
  if(number/10==0)
	    {System.out.println("个位数");
	    c=1;}
  else if(number/100==0)
        {System.out.println("两位数");
        c=2;}
  else if(number/1000==0)
	    {System.out.println("三位数");
	    c=3;}
  else if(number/10000==0)
	    {System.out.println("四位数");
	    c=4;}
  else if(number/100000==0)
	    {System.out.println("五位数");
	    c=5;}
  if(number/10000>=0)
  { System.out.println("万位是："+(number/10000));
  number=number%10000;
  }
  if(number/1000>=0)
  { System.out.println("千位是："+(number/1000));
  number=number%1000;
  }
  if(number/100>=0)
	  {System.out.println("百位是："+(number/100));
	  number=number%100;
	  }
  if(number/10>=0)
	  System.out.println("十位是："+(number/10));
      System.out.println("个位是："+(number%10)); 
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
