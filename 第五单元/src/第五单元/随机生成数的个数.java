package ���嵥Ԫ;

import java.util.Random;

public class ����������ĸ��� {

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
     System.out.println("0�ĸ���"+number0);
	
	 System.out.println("1�ĸ���"+number1);
	 System.out.println("2�ĸ���"+number2);
	 System.out.println("3�ĸ���"+number3);
	 System.out.println("4�ĸ���"+number4);
	 System.out.println("5�ĸ���"+number5);
	 System.out.println("6�ĸ���"+number6);
	 System.out.println("7�ĸ���"+number7);
	 System.out.println("8�ĸ���"+number8);
	 System.out.println("9�ĸ���"+number9);
	 
}
}
