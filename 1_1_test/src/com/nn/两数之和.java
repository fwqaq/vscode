package com.nn;

public class ����֮�� {
public static void main(String[] args) {
	System.out.println(Add(3,4));
}
public static int Add(int num1,int num2) {
	//���������ֵĺͣ�������+-*/��������
		   while (num2!=0) {
		            int temp = num1^num2;  //3  11      
		            num2 = (num1&num2)<<1;//4   100
		            num1 = temp;
		            /*
		             * 100  temp = 111 num2 = 1 num1 = temp   temp = 111 num2 = 
		             */
		        }
		        return num1;
}
}
