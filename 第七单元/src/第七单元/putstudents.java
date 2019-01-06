package 第七单元;

import java.util.Scanner;

public class putstudents {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
    Scanner in = new Scanner(System.in);
   student s1 = new student();//创建对象。只有对象后才能进行读入等等操作。
   s1.name = in.next();
   s1.age = in.nextInt();
   s1.grade = in.nextInt();
   s1.like = in.next();
   System.out.println(s1.put());
   student [] students = new student[10];//对象数组定义
   
	}

}
