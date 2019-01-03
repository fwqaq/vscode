package 第五单元;

import java.util.Scanner;

public class 高于平均分和低于平均分的人数 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     int score;
     int number = 0;
     int sum = 0;
     int []a;
     a = new int[100];
     int i=0;
     Scanner in = new Scanner (System.in);
     score = in.nextInt();
     while(score>=0)
     {
    	 number++; 
    	 sum = sum + score;
    	 score = in.nextInt();
    	a[i] = score;
    	i++;
     }
     int avg = sum/number;
     int gao=0;
     int di=0;
     for (int j = 0; j < number; j++) {
    	 if(a[j]>avg)
    	 {
    		 gao++;
    	 }
    	 else
    	 {
    		 di++;
    	 }
	}
     System.out.println("高于平均分的人数："+gao);
     System.out.println("低于平均分的人数："+di);
	}

}
