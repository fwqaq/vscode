package 第五单元;

import java.util.Random;
import java.util.Scanner;

public class 点名器 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
     String [] name;
     System.out.print("输入班级的总人数：");
     Scanner in = new Scanner( System.in);
     int number = in.nextInt();
     name = new String[number];
     int i=0;
     System.out.println("输入班级"+number+"人每个人的名字");
     for(i=0;i<number;i++)
     {
    	 name[i] = in.next();
     }
    Random r = new Random();
    int suiji = r.nextInt(number);
    System.out.println("全班名字总览");
    for (int j = 0; j < name.length; j++) {
		System.out.print(name[j]+"\t");
		if((j+1)%(number/2)==0)
		{
			System.out.println("");
		}
	}
    System.out.println("输出随机抽取的名字");
    System.out.print(name[suiji]);
     
	}

}
