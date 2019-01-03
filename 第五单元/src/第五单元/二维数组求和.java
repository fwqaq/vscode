package 第五单元;

import java.util.Scanner;

public class 二维数组求和 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
       int [][]two;
       int hang;
       int lie;
        Scanner in = new Scanner(System.in);
    	System.out.println("输入二维数组的行");
    	hang = in.nextInt();
    	System.out.println("输入二维数组的列");
    	lie = in.nextInt();
    	two = new int[hang][lie];
    	System.out.println("输入二维数组里的数据");
    	for(int i = 0; i < hang; i++)
    	{
    		for(int j = 0; j < lie; j++)
    		{
    			two[i][j] = in.nextInt();
    		}
    	}
    	int sum=0;
    	for(int i = 0; i < hang; i++)
    	{
    		for(int j = 0; j < lie; j++)
    		{
    			sum = sum + two[i][j];
    		}
    	}
    	
    	System.out.println("二维数组的和是："+sum);
	}

}
