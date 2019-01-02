package 第四单元;

import java.util.Scanner;

public class 计算1除以n的平方求和 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("计算sum=1/(1*1)+1/(2*2)+.....+1/(n*n)");
       int i;
       int j=1;
       Scanner in = new Scanner(System.in);
       System.out.println("输入您的n的最大值：");
       i = in.nextInt();
       double sum=0.0;
       while(j<=i)
       {
    	   sum=sum+1.0/(j*j);
    	   j++;
       }
       System.out.println(sum);
	}

}
