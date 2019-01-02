package 第四单元;

import java.util.Scanner;

public class 计算n个学生的总成绩和平均成绩 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int n;
	     int sum=0;
	     int score;
	     System.out.println("输入学生的总人数n:");
	     Scanner in = new Scanner(System.in);	 
	     n = in.nextInt();
	     if(n>0)
	     {    int i=1;
	    	 while(i<=n) {
	    		 score = in.nextInt();
	    		 sum=sum+score;
	    		 i++;
	    	 }
	    	 System.out.println(n+"个学生总成绩是："+sum);
	    	 System.out.println(n+"个学生平均成绩是："+sum/n);
	     }
	     else {
	    	 System.out.println("学生的人数不能为负数");
	     }
	}

}
