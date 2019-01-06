package 第七单元;
/*
 * 学生有姓名（name）和成绩（score）信息，成绩有科目（course）和分数（grade）信息。
 * 学生类的getResult方法显示输出成绩信息，setData方法实现初始化学生信息。
 * 编写学生类（Student）和成绩类（Score），并测试。
 */

import java.util.Scanner;

public class newStudentsinf {
    String name;
    String course;
	 int grade;
    public void getResult() {
    	System.out.println("科目是："+course+" 分数是："+grade);
    }
    public void setData() {
    	System.out.println("输入姓名，科目，分数");
    	Scanner in = new Scanner(System.in);
    	String name1 = in.next();
    	name = name1;
    	String course1 = in.next();
    	course = course1;
    	int grade1 = in.nextInt();
    	grade = grade1;
    	
    }
}
