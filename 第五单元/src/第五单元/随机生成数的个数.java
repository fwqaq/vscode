package 第五单元;

import java.util.Random;

public class 随机生成数的个数 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Random r =  new Random();
    int number0=0;
    int number1=0;
    int number2=0;
    int number3=0;
    int number4=0;
    int number5=0;
    int number6=0;
    int number7=0;
    int number8=0;
    int number9=0;
     
     for(int i =0; i < 100; i++)
     {
    	 int index = r.nextInt(10);
    	 System.out.print(index);
    switch (index) {
    case 0: number0++;break;
    case 1: number1++;break;
    case 2: number2++;break;
    case 3: number3++;break;
    case 4: number4++;break;
    case 5: number5++;break;
    case 6: number6++;break;
    case 7: number7++;break;
    case 8: number8++;break;
    default: number9++;break;
    }
    	 
     }
     System.out.println("0的个数"+number0);
	
	 System.out.println("1的个数"+number1);
	 System.out.println("2的个数"+number2);
	 System.out.println("3的个数"+number3);
	 System.out.println("4的个数"+number4);
	 System.out.println("5的个数"+number5);
	 System.out.println("6的个数"+number6);
	 System.out.println("7的个数"+number7);
	 System.out.println("8的个数"+number8);
	 System.out.println("9的个数"+number9);
	 
}
}
